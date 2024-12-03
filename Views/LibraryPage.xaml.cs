using Microsoft.UI.Xaml;
using Microsoft.UI.Xaml.Controls;
using Microsoft.UI.Xaml.Controls.Primitives;
using Microsoft.UI.Xaml.Data;
using Microsoft.UI.Xaml.Input;
using Microsoft.UI.Xaml.Media;
using Microsoft.UI.Xaml.Navigation;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;

namespace LTFLauncher.Views
{
    public sealed partial class LibraryPage : Page
    {
        public ObservableCollection<CardItem> CardItems { get; set; }

        public LibraryPage()
        {
            this.InitializeComponent();

            CardItems = new ObservableCollection<CardItem>
            {
                new CardItem { ImageSource = "/Assets/Square44x44Logo.png", Text = "Carte 1" },
                new CardItem { ImageSource = "/Assets/Square44x44Logo.png", Text = "Carte 2" },
                new CardItem { ImageSource = "/Assets/Square44x44Logo.png", Text = "Carte 3" }
            };
            this.DataContext = this;
        }
    }

    public class CardItem
    {
        public string ImageSource { get; set; }
        public string Text { get; set; }
    }
}
