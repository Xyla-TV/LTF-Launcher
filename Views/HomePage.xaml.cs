using System;
using System.IO;
using System.Diagnostics;
using System.Net.Http;
using System.Threading.Tasks;
using Microsoft.UI.Xaml;
using Microsoft.UI.Xaml.Controls;
using HtmlAgilityPack;
using System.Threading;

namespace LTFLauncher.Views
{
    public sealed partial class HomePage : Page
    {
        public HomePage()
        {
            this.InitializeComponent();
        }

        private async void OnDownloadButtonClick(object sender, RoutedEventArgs e)
        {
            Debug.WriteLine("Bouton de téléchargement cliqué.");
            string currentUrl = MyWebView.Source.ToString();
            string id = GetParameterFromUrl(currentUrl, "id");
            if (!string.IsNullOrEmpty(id))
            {
                string initialUrl = $"https://abandonware-france.org/ltf_abandon/ltf_jeu.php?id={id}&fic=liens";
                string downloadUrl = await GetDownloadUrlAsync(initialUrl);
                if (!string.IsNullOrEmpty(downloadUrl))
                {
                    Debug.WriteLine($"URL de téléchargement trouvée : {downloadUrl}");
                    // Lancer le téléchargement
                    await DownloadFileAsync(downloadUrl);
                }
                else
                {
                    Debug.WriteLine("URL de téléchargement non trouvée.");
                }
            }
            else
            {
                Debug.WriteLine("Paramètre 'id' non trouvé dans l'URL actuelle.");
            }
        }

        private string GetParameterFromUrl(string url, string parameterName)
        {
            var uri = new Uri(url);
            var query = uri.Query;
            var queryDictionary = System.Web.HttpUtility.ParseQueryString(query);
            return queryDictionary[parameterName];
        }

        private async Task<string> GetDownloadUrlAsync(string url)
        {
            Debug.WriteLine($"Récupération de l'URL de téléchargement depuis : {url}");
            using (HttpClient client = new HttpClient())
            {
                string pageContent = await client.GetStringAsync(url);
                var doc = new HtmlDocument();
                doc.LoadHtml(pageContent);

                // Rechercher le href avec "/telechargement/7239/"
                var linkNode = doc.DocumentNode.SelectSingleNode("//a[contains(@href, '/telechargement/7239/')]");
                if (linkNode != null)
                {
                    string nextUrl = "https://abandonware-france.org" + linkNode.GetAttributeValue("href", string.Empty);
                    Debug.WriteLine($"URL intermédiaire trouvée : {nextUrl}");
                    string nextPageContent = await client.GetStringAsync(nextUrl);
                    doc.LoadHtml(nextPageContent);

                    // Rechercher le href avec "/telechargement/clic/http/"
                    var downloadLinkNode = doc.DocumentNode.SelectSingleNode("//a[contains(@href, '/telechargement/clic/http/')]");
                    if (downloadLinkNode != null)
                    {
                        string finalUrl = "https://abandonware-france.org" + downloadLinkNode.GetAttributeValue("href", string.Empty);
                        Debug.WriteLine($"URL finale trouvée : {finalUrl}");
                        return finalUrl;
                    }
                }
            }
            Debug.WriteLine("URL de téléchargement non trouvée dans la page.");
            return null;
        }

        private async Task DownloadFileAsync(string url)
        {
            Debug.WriteLine($"Début du téléchargement depuis : {url}");
            using (HttpClient client = new HttpClient())
            {
                client.Timeout = TimeSpan.FromMilliseconds(Timeout.Infinite);
                var response = await client.GetAsync(url);
                if (response.IsSuccessStatusCode)
                {
                    var fileBytes = await response.Content.ReadAsByteArrayAsync();
                    // Enregistrer le fichier dans un répertoire temporaire
                    string tempPath = Path.GetTempPath();
                    string fileName = Path.Combine(tempPath, "downloaded_file_" + Guid.NewGuid().ToString() + ".tmp");
                    File.WriteAllBytes(fileName, fileBytes);
                    Debug.WriteLine($"Téléchargement terminé. Fichier enregistré à : {fileName}");
                }
                else
                {
                    Debug.WriteLine($"Échec du téléchargement. Code de statut : {response.StatusCode}");
                }
            }
        }
    }
}
