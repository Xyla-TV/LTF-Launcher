#include <iostream>
#include <fstream>
#include <sstream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <Windows.h>

int main()
{
	// Variables
	sf::RenderWindow window;
	auto icon = sf::Image{};
	sf::Cursor arrowCursor;
	sf::Cursor handCursor;
	sf::Font RobotoRegular;
	sf::Font RobotoCondensed;
	sf::Texture backgroundTexture1;
	sf::Sprite backgroundSprite1;
	sf::Texture backgroundTexture2;
	sf::Sprite backgroundSprite2;
	sf::Texture backgroundTexture3;
	sf::Sprite backgroundSprite3;
	sf::Texture bundleTexture;
	sf::Sprite bundleSprite;
	sf::Texture buttonHoveredTexture;
	sf::Texture buttonUnhoveredTexture;
	sf::Sprite forumsBackgroundSprite;
	sf::Sprite discordBackgroundSprite;
	sf::Sprite abwfrBackgroundSprite;
	sf::Sprite personalityBackgroundSprite;
	sf::Sprite companyBackgroundSprite;
	sf::Sprite magazineBackgroundSprite;
	sf::Sprite biiperBackgroundSprite;
	sf::Texture smallButtonHoveredTexture;
	sf::Texture smallButtonUnhoveredTexture;
	sf::Texture jeuButtonHoveredTexture1;
	sf::Texture jeuButtonHoveredTexture2;
	sf::Texture jeuButtonHoveredTexture3;
	sf::Texture jeuButtonHoveredTexture4;
	sf::Texture jeuButtonHoveredTexture5;
	sf::Texture jeuButtonHoveredTexture6;
	sf::Texture jeuButtonHoveredTexture7;
	sf::Texture jeuButtonHoveredTexture8;
	sf::Texture manuelsButtonHoveredTexture1;
	sf::Texture manuelsButtonHoveredTexture2;
	sf::Texture manuelsButtonHoveredTexture3;
	sf::Texture manuelsButtonHoveredTexture4;
	sf::Texture manuelsButtonHoveredTexture5;
	sf::Texture manuelsButtonHoveredTexture6;
	sf::Texture manuelsButtonHoveredTexture7;
	sf::Texture manuelsButtonHoveredTexture8;
	sf::Texture jeuButtonUnhoveredTexture1;
	sf::Texture jeuButtonUnhoveredTexture2;
	sf::Texture jeuButtonUnhoveredTexture3;
	sf::Texture jeuButtonUnhoveredTexture4;
	sf::Texture jeuButtonUnhoveredTexture5;
	sf::Texture jeuButtonUnhoveredTexture6;
	sf::Texture jeuButtonUnhoveredTexture7;
	sf::Texture jeuButtonUnhoveredTexture8;
	sf::Texture manuelsButtonUnhoveredTexture1;
	sf::Texture manuelsButtonUnhoveredTexture2;
	sf::Texture manuelsButtonUnhoveredTexture3;
	sf::Texture manuelsButtonUnhoveredTexture4;
	sf::Texture manuelsButtonUnhoveredTexture5;
	sf::Texture manuelsButtonUnhoveredTexture6;
	sf::Texture manuelsButtonUnhoveredTexture7;
	sf::Texture manuelsButtonUnhoveredTexture8;
	sf::Texture autreButtonHovered1Texture;
	sf::Texture autreButtonHovered2Texture;
	sf::Texture autreButtonHovered3Texture;
	sf::Texture autreButtonHovered4Texture;
	sf::Texture autreButtonHovered5Texture;
	sf::Texture autreButtonHovered6Texture;
	sf::Texture autreButtonHovered7Texture;
	sf::Texture autreButtonHovered8Texture;
	sf::Texture diversButtonHovered1Texture;
	sf::Texture diversButtonHovered2Texture;
	sf::Texture diversButtonHovered3Texture;
	sf::Texture diversButtonHovered4Texture;
	sf::Texture diversButtonHovered5Texture;
	sf::Texture diversButtonHovered6Texture;
	sf::Texture diversButtonHovered7Texture;
	sf::Texture diversButtonHovered8Texture;
	sf::Texture autreButtonUnhovered1Texture;
	sf::Texture autreButtonUnhovered2Texture;
	sf::Texture autreButtonUnhovered3Texture;
	sf::Texture autreButtonUnhovered4Texture;
	sf::Texture autreButtonUnhovered5Texture;
	sf::Texture autreButtonUnhovered6Texture;
	sf::Texture autreButtonUnhovered7Texture;
	sf::Texture autreButtonUnhovered8Texture;
	sf::Texture diversButtonUnhovered1Texture;
	sf::Texture diversButtonUnhovered2Texture;
	sf::Texture diversButtonUnhovered3Texture;
	sf::Texture diversButtonUnhovered4Texture;
	sf::Texture diversButtonUnhovered5Texture;
	sf::Texture diversButtonUnhovered6Texture;
	sf::Texture diversButtonUnhovered7Texture;
	sf::Texture diversButtonUnhovered8Texture;
	sf::Sprite moreButton1_1Sprite;
	sf::Sprite moreButton1_2Sprite;
	sf::Sprite moreButton2_1Sprite;
	sf::Sprite moreButton2_2Sprite;
	sf::Sprite moreButton3_1Sprite;
	sf::Sprite moreButton3_2Sprite;
	sf::Sprite moreButton4_1Sprite;
	sf::Sprite moreButton4_2Sprite;
	sf::Sprite moreButton5_1Sprite;
	sf::Sprite moreButton5_2Sprite;
	sf::Sprite moreButton6_1Sprite;
	sf::Sprite moreButton6_2Sprite;
	sf::Sprite moreButton7_1Sprite;
	sf::Sprite moreButton7_2Sprite;
	sf::Sprite moreButton8_1Sprite;
	sf::Sprite moreButton8_2Sprite;
	sf::Sprite exitBackgroundSprite;
	sf::Sprite soundBackgroundSprite;
	sf::Texture exitTexture;
	sf::Sprite exitSprite;
	sf::Texture soundonTexture;
	sf::Texture soundoffTexture;
	sf::Sprite soundSprite;
	sf::Texture jeu1Texture;
	sf::Texture jeu2Texture;
	sf::Texture jeu3Texture;
	sf::Texture jeu4Texture;
	sf::Texture jeu5Texture;
	sf::Texture jeu6Texture;
	sf::Texture jeu7Texture;
	sf::Texture jeu8Texture;
	sf::Sprite jeu1Sprite;
	sf::Sprite jeu2Sprite;
	sf::Sprite jeu3Sprite;
	sf::Sprite jeu4Sprite;
	sf::Sprite jeu5Sprite;
	sf::Sprite jeu6Sprite;
	sf::Sprite jeu7Sprite;
	sf::Sprite jeu8Sprite;
	sf::Sprite lancerJeu1Sprite;
	sf::Sprite lancerJeu2Sprite;
	sf::Sprite lancerJeu3Sprite;
	sf::Sprite lancerJeu4Sprite;
	sf::Sprite lancerJeu5Sprite;
	sf::Sprite lancerJeu6Sprite;
	sf::Sprite lancerJeu7Sprite;
	sf::Sprite lancerJeu8Sprite;
	sf::Sprite manuel1Sprite;
	sf::Sprite manuel2Sprite;
	sf::Sprite manuel3Sprite;
	sf::Sprite manuel4Sprite;
	sf::Sprite manuel5Sprite;
	sf::Sprite manuel6Sprite;
	sf::Sprite manuel7Sprite;
	sf::Sprite manuel8Sprite;
	std::ifstream versionFile;
	std::ifstream gameNameFile1;
	std::ifstream gameNameFile2;
	std::ifstream gameNameFile3;
	std::ifstream gameNameFile4;
	std::ifstream gameNameFile5;
	std::ifstream gameNameFile6;
	std::ifstream gameNameFile7;
	std::ifstream gameNameFile8;
	std::ifstream developerFile1;
	std::ifstream developerFile2;
	std::ifstream developerFile3;
	std::ifstream developerFile4;
	std::ifstream developerFile5;
	std::ifstream developerFile6;
	std::ifstream developerFile7;
	std::ifstream developerFile8;
	std::ifstream more1File1;
	std::ifstream more1File2;
	std::ifstream more1File3;
	std::ifstream more1File4;
	std::ifstream more1File5;
	std::ifstream more1File6;
	std::ifstream more1File7;
	std::ifstream more1File8;
	std::ifstream more2File1;
	std::ifstream more2File2;
	std::ifstream more2File3;
	std::ifstream more2File4;
	std::ifstream more2File5;
	std::ifstream more2File6;
	std::ifstream more2File7;
	std::ifstream more2File8;
	std::ifstream manuelsFile1;
	std::ifstream manuelsFile2;
	std::ifstream manuelsFile3;
	std::ifstream manuelsFile4;
	std::ifstream manuelsFile5;
	std::ifstream manuelsFile6;
	std::ifstream manuelsFile7;
	std::ifstream manuelsFile8;
	std::ifstream jeuxFile1;
	std::ifstream jeuxFile2;
	std::ifstream jeuxFile3;
	std::ifstream jeuxFile4;
	std::ifstream jeuxFile5;
	std::ifstream jeuxFile6;
	std::ifstream jeuxFile7;
	std::ifstream jeuxFile8;
	sf::Text forumsText;
	sf::Text discordText;
	sf::Text abwfrText;
	sf::Text personalityText;
	sf::Text companyText;
	sf::Text magazineText;
	sf::Text biiperText;
	sf::Text jeuText1;
	sf::Text jeuText2;
	sf::Text jeuText3;
	sf::Text jeuText4;
	sf::Text jeuText5;
	sf::Text jeuText6;
	sf::Text jeuText7;
	sf::Text jeuText8;
	sf::Text manuelText1;
	sf::Text manuelText2;
	sf::Text manuelText3;
	sf::Text manuelText4;
	sf::Text manuelText5;
	sf::Text manuelText6;
	sf::Text manuelText7;
	sf::Text manuelText8;
	sf::Text versionText;
	sf::Text gameNameText1;
	sf::Text gameNameText2;
	sf::Text gameNameText3;
	sf::Text gameNameText4;
	sf::Text gameNameText5;
	sf::Text gameNameText6;
	sf::Text gameNameText7;
	sf::Text gameNameText8;
	sf::Text developerText1;
	sf::Text developerText2;
	sf::Text developerText3;
	sf::Text developerText4;
	sf::Text developerText5;
	sf::Text developerText6;
	sf::Text developerText7;
	sf::Text developerText8;
	sf::Text more1Text1;
	sf::Text more1Text2;
	sf::Text more1Text3;
	sf::Text more1Text4;
	sf::Text more1Text5;
	sf::Text more1Text6;
	sf::Text more1Text7;
	sf::Text more1Text8;
	sf::Text more2Text1;
	sf::Text more2Text2;
	sf::Text more2Text3;
	sf::Text more2Text4;
	sf::Text more2Text5;
	sf::Text more2Text6;
	sf::Text more2Text7;
	sf::Text more2Text8;
	std::string versionLine;
	std::string gameNameLine1;
	std::string gameNameLine2;
	std::string gameNameLine3;
	std::string gameNameLine4;
	std::string gameNameLine5;
	std::string gameNameLine6;
	std::string gameNameLine7;
	std::string gameNameLine8;
	std::string developerLine1;
	std::string developerLine2;
	std::string developerLine3;
	std::string developerLine4;
	std::string developerLine5;
	std::string developerLine6;
	std::string developerLine7;
	std::string developerLine8;
	std::string more1Line1;
	std::string more1Line2;
	std::string more1Line3;
	std::string more1Line4;
	std::string more1Line5;
	std::string more1Line6;
	std::string more1Line7;
	std::string more1Line8;
	std::string more2Line1;
	std::string more2Line2;
	std::string more2Line3;
	std::string more2Line4;
	std::string more2Line5;
	std::string more2Line6;
	std::string more2Line7;
	std::string more2Line8;
	std::string manuelsLine1;
	std::string manuelsLine2;
	std::string manuelsLine3;
	std::string manuelsLine4;
	std::string manuelsLine5;
	std::string manuelsLine6;
	std::string manuelsLine7;
	std::string manuelsLine8;
	std::string jeuxLine1;
	std::string jeuxLine2;
	std::string jeuxLine3;
	std::string jeuxLine4;
	std::string jeuxLine5;
	std::string jeuxLine6;
	std::string jeuxLine7;
	std::string jeuxLine8;
	sf::Music music;
	bool isMuted = false;

	// Import icon
	if (!icon.loadFromFile("LTF/imgs/bundle/icon.png"))
	{
		std::cout << "Error : can't load icon.png" << std::endl;
	}

	// Import fonts
	if (!RobotoRegular.loadFromFile("LTF/fonts/Roboto-Regular.ttf"))
	{
		std::cout << "Error : can't load Roboto-Regular.ttf" << std::endl;
	}
	forumsText.setFont(RobotoRegular);
	forumsText.setCharacterSize(17);
	forumsText.setPosition(30, 170);
	forumsText.setString("Abandonware Forums");
	discordText.setFont(RobotoRegular);
	discordText.setCharacterSize(17);
	discordText.setPosition(30, 207);
	discordText.setString("Discord");
	abwfrText.setFont(RobotoRegular);
	abwfrText.setCharacterSize(17);
	abwfrText.setPosition(30, 282);
	abwfrText.setString("Abandonware France");
	personalityText.setFont(RobotoRegular);
	personalityText.setCharacterSize(17);
	personalityText.setPosition(30, 321);
	personalityText.setString("Personnalités");
	companyText.setFont(RobotoRegular);
	companyText.setCharacterSize(17);
	companyText.setPosition(30, 360);
	companyText.setString("Compagnies");
	magazineText.setFont(RobotoRegular);
	magazineText.setCharacterSize(17);
	magazineText.setPosition(30, 399);
	magazineText.setString("Magazines");
	biiperText.setFont(RobotoRegular);
	biiperText.setCharacterSize(17);
	biiperText.setPosition(30, 438);
	biiperText.setString("Biiper");

	if (!RobotoCondensed.loadFromFile("LTF/fonts/Roboto-Condensed.ttf"))
	{
		std::cout << "Error : can't load Roboto-Condensed.ttf" << std::endl;
	}
	versionText.setFont(RobotoCondensed);
	versionText.setCharacterSize(13);
	versionText.setPosition(150, 685);

	gameNameText1.setFont(RobotoCondensed);
	gameNameText1.setCharacterSize(18);
	gameNameText1.setPosition(335, 235);
	gameNameText2.setFont(RobotoCondensed);
	gameNameText2.setCharacterSize(18);
	gameNameText2.setPosition(570, 235);
	gameNameText3.setFont(RobotoCondensed);
	gameNameText3.setCharacterSize(18);
	gameNameText3.setPosition(805, 235);
	gameNameText4.setFont(RobotoCondensed);
	gameNameText4.setCharacterSize(18);
	gameNameText4.setPosition(1040, 235);
	gameNameText5.setFont(RobotoCondensed);
	gameNameText5.setCharacterSize(18);
	gameNameText5.setPosition(335, 590);
	gameNameText6.setFont(RobotoCondensed);
	gameNameText6.setCharacterSize(18);
	gameNameText6.setPosition(570, 590);
	gameNameText7.setFont(RobotoCondensed);
	gameNameText7.setCharacterSize(18);
	gameNameText7.setPosition(805, 590);
	gameNameText8.setFont(RobotoCondensed);
	gameNameText8.setCharacterSize(18);
	gameNameText8.setPosition(1040, 590);

	developerText1.setFont(RobotoCondensed);
	developerText1.setCharacterSize(14);
	developerText1.setPosition(335, 260);
	developerText1.setFillColor(sf::Color(23, 146, 191));
	developerText2.setFont(RobotoCondensed);
	developerText2.setCharacterSize(14);
	developerText2.setPosition(570, 260);
	developerText2.setFillColor(sf::Color(23, 146, 191));
	developerText3.setFont(RobotoCondensed);
	developerText3.setCharacterSize(14);
	developerText3.setPosition(805, 260);
	developerText3.setFillColor(sf::Color(23, 146, 191));
	developerText4.setFont(RobotoCondensed);
	developerText4.setCharacterSize(14);
	developerText4.setPosition(1040, 260);
	developerText4.setFillColor(sf::Color(23, 146, 191));
	developerText5.setFont(RobotoCondensed);
	developerText5.setCharacterSize(14);
	developerText5.setPosition(335, 615);
	developerText5.setFillColor(sf::Color(23, 146, 191));
	developerText6.setFont(RobotoCondensed);
	developerText6.setCharacterSize(14);
	developerText6.setPosition(570, 615);
	developerText6.setFillColor(sf::Color(23, 146, 191));
	developerText7.setFont(RobotoCondensed);
	developerText7.setCharacterSize(14);
	developerText7.setPosition(805, 615);
	developerText7.setFillColor(sf::Color(23, 146, 191));
	developerText8.setFont(RobotoCondensed);
	developerText8.setCharacterSize(14);
	developerText8.setPosition(1040, 615);
	developerText8.setFillColor(sf::Color(23, 146, 191));

	jeuText1.setFont(RobotoCondensed);
	jeuText1.setCharacterSize(14);
	jeuText1.setPosition(335, 280);
	jeuText2.setFont(RobotoCondensed);
	jeuText2.setCharacterSize(14);
	jeuText2.setPosition(570, 280);
	jeuText3.setFont(RobotoCondensed);
	jeuText3.setCharacterSize(14);
	jeuText3.setPosition(805, 280);
	jeuText4.setFont(RobotoCondensed);
	jeuText4.setCharacterSize(14);
	jeuText4.setPosition(1040, 280);
	jeuText5.setFont(RobotoCondensed);
	jeuText5.setCharacterSize(14);
	jeuText5.setPosition(335, 635);
	jeuText6.setFont(RobotoCondensed);
	jeuText6.setCharacterSize(14);
	jeuText6.setPosition(570, 635);
	jeuText7.setFont(RobotoCondensed);
	jeuText7.setCharacterSize(14);
	jeuText7.setPosition(805, 635);
	jeuText8.setFont(RobotoCondensed);
	jeuText8.setCharacterSize(14);
	jeuText8.setPosition(1040, 635);

	manuelText1.setFont(RobotoCondensed);
	manuelText1.setCharacterSize(14);
	manuelText1.setPosition(335, 300);
	manuelText2.setFont(RobotoCondensed);
	manuelText2.setCharacterSize(14);
	manuelText2.setPosition(570, 300);
	manuelText3.setFont(RobotoCondensed);
	manuelText3.setCharacterSize(14);
	manuelText3.setPosition(805, 300);
	manuelText4.setFont(RobotoCondensed);
	manuelText4.setCharacterSize(14);
	manuelText4.setPosition(1040, 300);
	manuelText5.setFont(RobotoCondensed);
	manuelText5.setCharacterSize(14);
	manuelText5.setPosition(335, 655);
	manuelText6.setFont(RobotoCondensed);
	manuelText6.setCharacterSize(14);
	manuelText6.setPosition(570, 655);
	manuelText7.setFont(RobotoCondensed);
	manuelText7.setCharacterSize(14);
	manuelText7.setPosition(805, 655);
	manuelText8.setFont(RobotoCondensed);
	manuelText8.setCharacterSize(14);
	manuelText8.setPosition(1040, 655);

	more1Text1.setFont(RobotoCondensed);
	more1Text1.setCharacterSize(14);
	more1Text1.setPosition(335, 320);
	more1Text2.setFont(RobotoCondensed);
	more1Text2.setCharacterSize(14);
	more1Text2.setPosition(570, 320);
	more1Text3.setFont(RobotoCondensed);
	more1Text3.setCharacterSize(14);
	more1Text3.setPosition(805, 320);
	more1Text4.setFont(RobotoCondensed);
	more1Text4.setCharacterSize(14);
	more1Text4.setPosition(1040, 320);
	more1Text5.setFont(RobotoCondensed);
	more1Text5.setCharacterSize(14);
	more1Text5.setPosition(335, 675);
	more1Text6.setFont(RobotoCondensed);
	more1Text6.setCharacterSize(14);
	more1Text6.setPosition(570, 675);
	more1Text7.setFont(RobotoCondensed);
	more1Text7.setCharacterSize(14);
	more1Text7.setPosition(805, 675);
	more1Text8.setFont(RobotoCondensed);
	more1Text8.setCharacterSize(14);
	more1Text8.setPosition(1040, 675);

	more2Text1.setFont(RobotoCondensed);
	more2Text1.setCharacterSize(14);
	more2Text1.setPosition(335, 340);
	more2Text2.setFont(RobotoCondensed);
	more2Text2.setCharacterSize(14);
	more2Text2.setPosition(570, 340);
	more2Text3.setFont(RobotoCondensed);
	more2Text3.setCharacterSize(14);
	more2Text3.setPosition(805, 340);
	more2Text4.setFont(RobotoCondensed);
	more2Text4.setCharacterSize(14);
	more2Text4.setPosition(1040, 340);
	more2Text5.setFont(RobotoCondensed);
	more2Text5.setCharacterSize(14);
	more2Text5.setPosition(335, 695);
	more2Text6.setFont(RobotoCondensed);
	more2Text6.setCharacterSize(14);
	more2Text6.setPosition(570, 695);
	more2Text7.setFont(RobotoCondensed);
	more2Text7.setCharacterSize(14);
	more2Text7.setPosition(805, 695);
	more2Text8.setFont(RobotoCondensed);
	more2Text8.setCharacterSize(14);
	more2Text8.setPosition(1040, 695);




	// Import images
	if (!backgroundTexture1.loadFromFile("LTF/imgs/bundle/background1.png"))
	{
		std::cout << "Error : can't load background.png" << std::endl;
	}
	backgroundSprite1.setTexture(backgroundTexture1);
	backgroundSprite1.setPosition(0, 0);

	if (!backgroundTexture2.loadFromFile("LTF/imgs/bundle/background2.png"))
	{
		std::cout << "Error : can't load background2.png" << std::endl;
	}
	backgroundSprite2.setTexture(backgroundTexture2);
	backgroundSprite2.setPosition(0, 660);

	if (!backgroundTexture3.loadFromFile("LTF/imgs/bundle/background3.png"))
	{
		std::cout << "Error : can't load background3.png" << std::endl;
	}
	backgroundSprite3.setTexture(backgroundTexture3);
	backgroundSprite3.setPosition(120, 0);

	if (!buttonHoveredTexture.loadFromFile("LTF/imgs/bundle/buttonHovered.png"))
	{
		std::cout << "Error : can't load buttonHovered.png" << std::endl;
	}

	if (!buttonUnhoveredTexture.loadFromFile("LTF/imgs/bundle/buttonUnhovered.png"))
	{
		std::cout << "Error : can't load buttonHovered.png" << std::endl;
	}
	forumsBackgroundSprite.setTexture(buttonUnhoveredTexture);
	forumsBackgroundSprite.setPosition(0, 141);
	discordBackgroundSprite.setTexture(buttonUnhoveredTexture);
	discordBackgroundSprite.setPosition(0, 200);
	abwfrBackgroundSprite.setTexture(buttonUnhoveredTexture);
	abwfrBackgroundSprite.setPosition(0, 273);
	personalityBackgroundSprite.setTexture(buttonUnhoveredTexture);
	personalityBackgroundSprite.setPosition(0, 312);
	companyBackgroundSprite.setTexture(buttonUnhoveredTexture);
	companyBackgroundSprite.setPosition(0, 351);
	magazineBackgroundSprite.setTexture(buttonUnhoveredTexture);
	magazineBackgroundSprite.setPosition(0, 390);
	biiperBackgroundSprite.setTexture(buttonUnhoveredTexture);
	biiperBackgroundSprite.setPosition(0, 429);
	
	if (!smallButtonHoveredTexture.loadFromFile("LTF/imgs/bundle/smallButtonHovered.png"))
	{
		std::cout << "Error : can't load smallButtonHovered.png" << std::endl;
	}

	if (!smallButtonUnhoveredTexture.loadFromFile("LTF/imgs/bundle/smallButtonUnhovered.png"))
	{
		std::cout << "Error : can't load smallButtonUnhovered.png" << std::endl;
	}
	exitBackgroundSprite.setTexture(smallButtonUnhoveredTexture);
	exitBackgroundSprite.setPosition(0, 660);
	soundBackgroundSprite.setTexture(smallButtonUnhoveredTexture);
	soundBackgroundSprite.setPosition(60, 660);

	if (!jeuButtonHoveredTexture1.loadFromFile("LTF/imgs/boutons/jeuButtonHovered1.png"))
	{
		std::cout << "Error : can't load mediumButtonHovered.png" << std::endl;
	}

	if (!jeuButtonUnhoveredTexture1.loadFromFile("LTF/imgs/boutons/jeuButtonUnhovered1.png"))
	{
		std::cout << "Error : can't load mediumButtonUnhovered.png" << std::endl;
	}

	if (!jeuButtonHoveredTexture2.loadFromFile("LTF/imgs/boutons/jeuButtonHovered2.png"))
	{
		std::cout << "Error : can't load mediumButtonHovered.png" << std::endl;
	}

	if (!jeuButtonUnhoveredTexture2.loadFromFile("LTF/imgs/boutons/jeuButtonUnhovered2.png"))
	{
		std::cout << "Error : can't load mediumButtonUnhovered.png" << std::endl;
	}

	if (!jeuButtonHoveredTexture3.loadFromFile("LTF/imgs/boutons/jeuButtonHovered3.png"))
	{
		std::cout << "Error : can't load mediumButtonHovered.png" << std::endl;
	}

	if (!jeuButtonHoveredTexture4.loadFromFile("LTF/imgs/boutons/jeuButtonHovered4.png"))
	{
		std::cout << "Error : can't load mediumButtonHovered.png" << std::endl;
	}

	if (!jeuButtonUnhoveredTexture3.loadFromFile("LTF/imgs/boutons/jeuButtonUnhovered3.png"))
	{
		std::cout << "Error : can't load mediumButtonUnhovered.png" << std::endl;
	}

	if (!jeuButtonUnhoveredTexture4.loadFromFile("LTF/imgs/boutons/jeuButtonUnhovered4.png"))
	{
		std::cout << "Error : can't load mediumButtonUnhovered.png" << std::endl;
	}

	if (!jeuButtonHoveredTexture5.loadFromFile("LTF/imgs/boutons/jeuButtonHovered5.png"))
	{
		std::cout << "Error : can't load mediumButtonHovered.png" << std::endl;
	}

	if (!jeuButtonUnhoveredTexture5.loadFromFile("LTF/imgs/boutons/jeuButtonUnhovered5.png"))
	{
		std::cout << "Error : can't load mediumButtonUnhovered.png" << std::endl;
	}

	if (!jeuButtonHoveredTexture6.loadFromFile("LTF/imgs/boutons/jeuButtonHovered6.png"))
	{
		std::cout << "Error : can't load mediumButtonHovered.png" << std::endl;
	}

	if (!jeuButtonUnhoveredTexture6.loadFromFile("LTF/imgs/boutons/jeuButtonUnhovered6.png"))
	{
		std::cout << "Error : can't load mediumButtonUnhovered.png" << std::endl;
	}

	if (!jeuButtonHoveredTexture7.loadFromFile("LTF/imgs/boutons/jeuButtonHovered7.png"))
	{
		std::cout << "Error : can't load mediumButtonHovered.png" << std::endl;
	}

	if (!jeuButtonUnhoveredTexture7.loadFromFile("LTF/imgs/boutons/jeuButtonUnhovered7.png"))
	{
		std::cout << "Error : can't load mediumButtonUnhovered.png" << std::endl;
	}

	if (!jeuButtonHoveredTexture8.loadFromFile("LTF/imgs/boutons/jeuButtonHovered8.png"))
	{
		std::cout << "Error : can't load mediumButtonHovered.png" << std::endl;
	}

	if (!jeuButtonUnhoveredTexture8.loadFromFile("LTF/imgs/boutons/jeuButtonUnhovered8.png"))
	{
		std::cout << "Error : can't load mediumButtonUnhovered.png" << std::endl;
	}

	if (!manuelsButtonHoveredTexture1.loadFromFile("LTF/imgs/boutons/manuelsButtonHovered1.png"))
	{
		std::cout << "Error : can't load mediumButtonHovered.png" << std::endl;
	}

	if (!manuelsButtonUnhoveredTexture1.loadFromFile("LTF/imgs/boutons/manuelsButtonUnhovered1.png"))
	{
		std::cout << "Error : can't load mediumButtonUnhovered.png" << std::endl;
	}

	if (!manuelsButtonHoveredTexture2.loadFromFile("LTF/imgs/boutons/manuelsButtonHovered2.png"))
	{
		std::cout << "Error : can't load mediumButtonHovered.png" << std::endl;
	}

	if (!manuelsButtonUnhoveredTexture2.loadFromFile("LTF/imgs/boutons/manuelsButtonUnhovered2.png"))
	{
		std::cout << "Error : can't load mediumButtonUnhovered.png" << std::endl;
	}

	if (!manuelsButtonHoveredTexture3.loadFromFile("LTF/imgs/boutons/manuelsButtonHovered3.png"))
	{
		std::cout << "Error : can't load mediumButtonHovered.png" << std::endl;
	}

	if (!manuelsButtonHoveredTexture4.loadFromFile("LTF/imgs/boutons/manuelsButtonHovered4.png"))
	{
		std::cout << "Error : can't load mediumButtonHovered.png" << std::endl;
	}

	if (!manuelsButtonUnhoveredTexture3.loadFromFile("LTF/imgs/boutons/manuelsButtonUnhovered3.png"))
	{
		std::cout << "Error : can't load mediumButtonUnhovered.png" << std::endl;
	}

	if (!manuelsButtonUnhoveredTexture4.loadFromFile("LTF/imgs/boutons/manuelsButtonUnhovered4.png"))
	{
		std::cout << "Error : can't load mediumButtonUnhovered.png" << std::endl;
	}

	if (!manuelsButtonHoveredTexture5.loadFromFile("LTF/imgs/boutons/manuelsButtonHovered5.png"))
	{
		std::cout << "Error : can't load mediumButtonHovered.png" << std::endl;
	}

	if (!manuelsButtonUnhoveredTexture5.loadFromFile("LTF/imgs/boutons/manuelsButtonUnhovered5.png"))
	{
		std::cout << "Error : can't load mediumButtonUnhovered.png" << std::endl;
	}

	if (!manuelsButtonHoveredTexture6.loadFromFile("LTF/imgs/boutons/manuelsButtonHovered6.png"))
	{
		std::cout << "Error : can't load mediumButtonHovered.png" << std::endl;
	}

	if (!manuelsButtonUnhoveredTexture6.loadFromFile("LTF/imgs/boutons/manuelsButtonUnhovered6.png"))
	{
		std::cout << "Error : can't load mediumButtonUnhovered.png" << std::endl;
	}

	if (!manuelsButtonHoveredTexture7.loadFromFile("LTF/imgs/boutons/manuelsButtonHovered7.png"))
	{
		std::cout << "Error : can't load mediumButtonHovered.png" << std::endl;
	}

	if (!manuelsButtonUnhoveredTexture7.loadFromFile("LTF/imgs/boutons/manuelsButtonUnhovered7.png"))
	{
		std::cout << "Error : can't load mediumButtonUnhovered.png" << std::endl;
	}

	if (!manuelsButtonHoveredTexture8.loadFromFile("LTF/imgs/boutons/manuelsButtonHovered8.png"))
	{
		std::cout << "Error : can't load mediumButtonHovered.png" << std::endl;
	}

	if (!manuelsButtonUnhoveredTexture8.loadFromFile("LTF/imgs/boutons/manuelsButtonUnhovered8.png"))
	{
		std::cout << "Error : can't load mediumButtonUnhovered.png" << std::endl;
	}
	lancerJeu1Sprite.setTexture(jeuButtonUnhoveredTexture1);
	lancerJeu1Sprite.setPosition(335, 279);
	lancerJeu2Sprite.setTexture(jeuButtonUnhoveredTexture2);
	lancerJeu2Sprite.setPosition(570, 279);
	lancerJeu3Sprite.setTexture(jeuButtonUnhoveredTexture3);
	lancerJeu3Sprite.setPosition(805, 279);
	lancerJeu4Sprite.setTexture(jeuButtonUnhoveredTexture4);
	lancerJeu4Sprite.setPosition(1040, 279);
	lancerJeu5Sprite.setTexture(jeuButtonUnhoveredTexture5);
	lancerJeu5Sprite.setPosition(335, 634);
	lancerJeu6Sprite.setTexture(jeuButtonUnhoveredTexture6);
	lancerJeu6Sprite.setPosition(570, 634);
	lancerJeu7Sprite.setTexture(jeuButtonUnhoveredTexture7);
	lancerJeu7Sprite.setPosition(805, 634);
	lancerJeu8Sprite.setTexture(jeuButtonUnhoveredTexture8);
	lancerJeu8Sprite.setPosition(1040, 634);
	manuel1Sprite.setTexture(manuelsButtonUnhoveredTexture1);
	manuel1Sprite.setPosition(335, 299);
	manuel2Sprite.setTexture(manuelsButtonUnhoveredTexture2);
	manuel2Sprite.setPosition(570, 299);
	manuel3Sprite.setTexture(manuelsButtonUnhoveredTexture3);
	manuel3Sprite.setPosition(805, 299);
	manuel4Sprite.setTexture(manuelsButtonUnhoveredTexture4);
	manuel4Sprite.setPosition(1040, 299);
	manuel5Sprite.setTexture(manuelsButtonUnhoveredTexture5);
	manuel5Sprite.setPosition(335, 654);
	manuel6Sprite.setTexture(manuelsButtonUnhoveredTexture6);
	manuel6Sprite.setPosition(570, 654);
	manuel7Sprite.setTexture(manuelsButtonUnhoveredTexture7);
	manuel7Sprite.setPosition(805, 654);
	manuel8Sprite.setTexture(manuelsButtonUnhoveredTexture8);
	manuel8Sprite.setPosition(1040, 654);


	if (!exitTexture.loadFromFile("LTF/imgs/bundle/exit.png"))
	{
		std::cout << "Error : can't load exit.png" << std::endl;
	}
	exitSprite.setTexture(exitTexture);
	exitSprite.setPosition(20, 680);

	if (!soundoffTexture.loadFromFile("LTF/imgs/bundle/soundoff.png"))
	{
		std::cout << "Error : can't load soundoff.png" << std::endl;
	}

	if (!soundonTexture.loadFromFile("LTF/imgs/bundle/soundon.png"))
	{
		std::cout << "Error : can't load soundon.png" << std::endl;
	}
	soundSprite.setTexture(soundonTexture);
	soundSprite.setPosition(80, 680);

	if (!bundleTexture.loadFromFile("LTF/imgs/bundle.png"))
	{
		std::cout << "Error : can't load bundle.png" << std::endl;
	}
	bundleSprite.setTexture(bundleTexture);
	bundleSprite.setPosition(40, 30);

	if (!jeu1Texture.loadFromFile("LTF/imgs/jeu1.png"))
	{
		std::cout << "Error : can't load jeu1.png" << std::endl;
	}
	jeu1Sprite.setTexture(jeu1Texture);
	jeu1Sprite.setPosition(335, 5);

	if (!jeu2Texture.loadFromFile("LTF/imgs/jeu2.png"))
	{
		std::cout << "Error : can't load jeu2.png" << std::endl;
	}
	jeu2Sprite.setTexture(jeu2Texture);
	jeu2Sprite.setPosition(570, 5);

	if (!jeu3Texture.loadFromFile("LTF/imgs/jeu3.png"))
	{
		std::cout << "Error : can't load jeu3.png" << std::endl;
	}
	jeu3Sprite.setTexture(jeu3Texture);
	jeu3Sprite.setPosition(805, 5);

	if (!jeu4Texture.loadFromFile("LTF/imgs/jeu4.png"))
	{
		std::cout << "Error : can't load jeu4.png" << std::endl;
	}
	jeu4Sprite.setTexture(jeu4Texture);
	jeu4Sprite.setPosition(1040, 5);

	if (!jeu5Texture.loadFromFile("LTF/imgs/jeu5.png"))
	{
		std::cout << "Error : can't load jeu5.png" << std::endl;
	}
	jeu5Sprite.setTexture(jeu5Texture);
	jeu5Sprite.setPosition(335, 360);

	if (!jeu6Texture.loadFromFile("LTF/imgs/jeu6.png"))
	{
		std::cout << "Error : can't load jeu6.png" << std::endl;
	}
	jeu6Sprite.setTexture(jeu6Texture);
	jeu6Sprite.setPosition(570, 360);

	if (!jeu7Texture.loadFromFile("LTF/imgs/jeu7.png"))
	{
		std::cout << "Error : can't load jeu7.png" << std::endl;
	}
	jeu7Sprite.setTexture(jeu7Texture);
	jeu7Sprite.setPosition(805, 360);

	if (!jeu8Texture.loadFromFile("LTF/imgs/jeu8.png"))
	{
		std::cout << "Error : can't load jeu8.png" << std::endl;
	}
	jeu8Sprite.setTexture(jeu8Texture);
	jeu8Sprite.setPosition(1040, 360);

	//

	if (!autreButtonHovered1Texture.loadFromFile("LTF/imgs/boutons/autreButtonHovered1.png"))
	{
		std::cout << "Error : can't load autreButtonHovered1.png" << std::endl;
	}
	if (!autreButtonUnhovered1Texture.loadFromFile("LTF/imgs/boutons/autreButtonUnhovered1.png"))
	{
		std::cout << "Error : can't load autreButtonUnhovered1.png" << std::endl;
	}
    moreButton1_1Sprite.setTexture(autreButtonUnhovered1Texture);
	moreButton1_1Sprite.setPosition(335, 319);

	if (!diversButtonHovered1Texture.loadFromFile("LTF/imgs/boutons/diversButtonHovered1.png"))
	{
		std::cout << "Error : can't load diversButtonHovered1.png" << std::endl;
	}
	if (!diversButtonUnhovered1Texture.loadFromFile("LTF/imgs/boutons/diversButtonUnhovered1.png"))
	{
		std::cout << "Error : can't load diversButtonUnhovered1.png" << std::endl;
	}
	moreButton1_2Sprite.setTexture(diversButtonUnhovered1Texture);
	moreButton1_2Sprite.setPosition(335, 339);

	if (!autreButtonHovered2Texture.loadFromFile("LTF/imgs/boutons/autreButtonHovered2.png"))
	{
		std::cout << "Error : can't load autreButtonHovered2.png" << std::endl;
	}
	if (!autreButtonUnhovered2Texture.loadFromFile("LTF/imgs/boutons/autreButtonUnhovered2.png"))
	{
		std::cout << "Error : can't load autreButtonUnhovered2.png" << std::endl;
	}
	moreButton2_1Sprite.setTexture(autreButtonUnhovered2Texture);
	moreButton2_1Sprite.setPosition(570, 319);

	if (!diversButtonHovered2Texture.loadFromFile("LTF/imgs/boutons/diversButtonHovered2.png"))
	{
		std::cout << "Error : can't load diversButtonHovered2.png" << std::endl;
	}
	if (!diversButtonUnhovered2Texture.loadFromFile("LTF/imgs/boutons/diversButtonUnhovered2.png"))
	{
		std::cout << "Error : can't load diversButtonUnhovered2.png" << std::endl;
	}
	moreButton2_2Sprite.setTexture(diversButtonUnhovered2Texture);
	moreButton2_2Sprite.setPosition(570, 339);

	if (!autreButtonHovered3Texture.loadFromFile("LTF/imgs/boutons/autreButtonHovered3.png"))
	{
		std::cout << "Error : can't load autreButtonHovered3.png" << std::endl;
	}
	if (!autreButtonUnhovered3Texture.loadFromFile("LTF/imgs/boutons/autreButtonUnhovered3.png"))
	{
		std::cout << "Error : can't load autreButtonUnhovered3.png" << std::endl;
	}
	moreButton3_1Sprite.setTexture(autreButtonUnhovered3Texture);
	moreButton3_1Sprite.setPosition(805, 319);

	if (!diversButtonHovered3Texture.loadFromFile("LTF/imgs/boutons/diversButtonHovered3.png"))
	{
		std::cout << "Error : can't load diversButtonHovered3.png" << std::endl;
	}
	if (!diversButtonUnhovered3Texture.loadFromFile("LTF/imgs/boutons/diversButtonUnhovered3.png"))
	{
		std::cout << "Error : can't load diversButtonUnhovered3.png" << std::endl;
	}
	moreButton3_2Sprite.setTexture(diversButtonUnhovered3Texture);
	moreButton3_2Sprite.setPosition(805, 339);

	if (!autreButtonHovered4Texture.loadFromFile("LTF/imgs/boutons/autreButtonHovered4.png"))
	{
		std::cout << "Error : can't load autreButtonHovered4.png" << std::endl;
	}
	if (!autreButtonUnhovered4Texture.loadFromFile("LTF/imgs/boutons/autreButtonUnhovered4.png"))
	{
		std::cout << "Error : can't load autreButtonUnhovered4.png" << std::endl;
	}
	moreButton4_1Sprite.setTexture(autreButtonUnhovered4Texture);
	moreButton4_1Sprite.setPosition(1040, 319);

	if (!diversButtonHovered4Texture.loadFromFile("LTF/imgs/boutons/diversButtonHovered4.png"))
	{
		std::cout << "Error : can't load diversButtonHovered4.png" << std::endl;
	}
	if (!diversButtonUnhovered4Texture.loadFromFile("LTF/imgs/boutons/diversButtonUnhovered4.png"))
	{
		std::cout << "Error : can't load diversButtonUnhovered4.png" << std::endl;
	}
	moreButton4_2Sprite.setTexture(diversButtonUnhovered4Texture);
	moreButton4_2Sprite.setPosition(1040, 339);

	if (!autreButtonHovered5Texture.loadFromFile("LTF/imgs/boutons/autreButtonHovered5.png"))
	{
		std::cout << "Error : can't load autreButtonHovered5.png" << std::endl;
	}
	if (!autreButtonUnhovered5Texture.loadFromFile("LTF/imgs/boutons/autreButtonUnhovered5.png"))
	{
		std::cout << "Error : can't load autreButtonUnhovered5.png" << std::endl;
	}
	moreButton5_1Sprite.setTexture(autreButtonUnhovered5Texture);
	moreButton5_1Sprite.setPosition(335, 674);

	if (!diversButtonHovered5Texture.loadFromFile("LTF/imgs/boutons/diversButtonHovered5.png"))
	{
		std::cout << "Error : can't load diversButtonHovered5.png" << std::endl;
	}
	if (!diversButtonUnhovered5Texture.loadFromFile("LTF/imgs/boutons/diversButtonUnhovered5.png"))
	{
		std::cout << "Error : can't load diversButtonUnhovered5.png" << std::endl;
	}
	moreButton5_2Sprite.setTexture(diversButtonUnhovered5Texture);
	moreButton5_2Sprite.setPosition(335, 694);

	if (!autreButtonHovered6Texture.loadFromFile("LTF/imgs/boutons/autreButtonHovered6.png"))
	{
		std::cout << "Error : can't load autreButtonHovered6.png" << std::endl;
	}
	if (!autreButtonUnhovered6Texture.loadFromFile("LTF/imgs/boutons/autreButtonUnhovered6.png"))
	{
		std::cout << "Error : can't load autreButtonUnhovered6.png" << std::endl;
	}
	moreButton6_1Sprite.setTexture(autreButtonUnhovered6Texture);
	moreButton6_1Sprite.setPosition(570, 674);

	if (!diversButtonHovered6Texture.loadFromFile("LTF/imgs/boutons/diversButtonHovered6.png"))
	{
		std::cout << "Error : can't load diversButtonHovered6.png" << std::endl;
	}
	if (!diversButtonUnhovered6Texture.loadFromFile("LTF/imgs/boutons/diversButtonUnhovered6.png"))
	{
		std::cout << "Error : can't load diversButtonUnhovered6.png" << std::endl;
	}
	moreButton6_2Sprite.setTexture(diversButtonUnhovered6Texture);
	moreButton6_2Sprite.setPosition(570, 694);

	if (!autreButtonHovered7Texture.loadFromFile("LTF/imgs/boutons/autreButtonHovered7.png"))
	{
		std::cout << "Error : can't load autreButtonHovered7.png" << std::endl;
	}
	if (!autreButtonUnhovered7Texture.loadFromFile("LTF/imgs/boutons/autreButtonUnhovered7.png"))
	{
		std::cout << "Error : can't load autreButtonUnhovered7.png" << std::endl;
	}
	moreButton7_1Sprite.setTexture(autreButtonUnhovered7Texture);
	moreButton7_1Sprite.setPosition(805, 674);

	if (!diversButtonHovered7Texture.loadFromFile("LTF/imgs/boutons/diversButtonHovered7.png"))
	{
		std::cout << "Error : can't load diversButtonHovered7.png" << std::endl;
	}
	if (!diversButtonUnhovered7Texture.loadFromFile("LTF/imgs/boutons/diversButtonUnhovered7.png"))
	{
		std::cout << "Error : can't load diversButtonUnhovered7.png" << std::endl;
	}
	moreButton7_2Sprite.setTexture(diversButtonUnhovered7Texture);
	moreButton7_2Sprite.setPosition(805, 694);

	if (!autreButtonHovered8Texture.loadFromFile("LTF/imgs/boutons/autreButtonHovered8.png"))
	{
		std::cout << "Error : can't load autreButtonHovered8.png" << std::endl;
	}
	if (!autreButtonUnhovered8Texture.loadFromFile("LTF/imgs/boutons/autreButtonUnhovered8.png"))
	{
		std::cout << "Error : can't load autreButtonUnhovered8.png" << std::endl;
	}
	moreButton8_1Sprite.setTexture(autreButtonUnhovered8Texture);
	moreButton8_1Sprite.setPosition(1040, 674);

	if (!diversButtonHovered8Texture.loadFromFile("LTF/imgs/boutons/diversButtonHovered8.png"))
	{
		std::cout << "Error : can't load diversButtonHovered8.png" << std::endl;
	}
	if (!diversButtonUnhovered8Texture.loadFromFile("LTF/imgs/boutons/diversButtonUnhovered8.png"))
	{
		std::cout << "Error : can't load diversButtonUnhovered8.png" << std::endl;
	}
	moreButton8_2Sprite.setTexture(diversButtonUnhovered8Texture);
	moreButton8_2Sprite.setPosition(1040, 694);






	// Import and play music
	if (!music.openFromFile("LTF/sounds/music.ogg"))
	{
		std::cout << "Error : can't load music.ogg" << std::endl;
	}
	music.play();
	music.setLoop(true);
	music.setVolume(40.f);

	// Import text files
	versionFile.open("LTF/text/version.txt");
	if (versionFile.is_open())
	{
		while (std::getline(versionFile, versionLine))
		{
			versionText.setString(versionLine);
		}
	}

	jeuxFile1.open("LTF/text/6-jeux1.txt");
	if (jeuxFile1.is_open())
	{
		while (std::getline(jeuxFile1, jeuxLine1))
		{
			jeuText1.setString(jeuxLine1);
		}
	}

	jeuxFile2.open("LTF/text/6-jeux2.txt");
	if (jeuxFile2.is_open())
	{
		while (std::getline(jeuxFile2, jeuxLine2))
		{
			jeuText2.setString(jeuxLine2);
		}
	}

	jeuxFile3.open("LTF/text/6-jeux3.txt");
	if (jeuxFile3.is_open())
	{
		while (std::getline(jeuxFile3, jeuxLine3))
		{
			jeuText3.setString(jeuxLine3);
		}
	}

	jeuxFile4.open("LTF/text/6-jeux4.txt");
	if (jeuxFile4.is_open())
	{
		while (std::getline(jeuxFile4, jeuxLine4))
		{
			jeuText4.setString(jeuxLine4);
		}
	}

	jeuxFile5.open("LTF/text/6-jeux5.txt");
	if (jeuxFile5.is_open())
	{
		while (std::getline(jeuxFile5, jeuxLine5))
		{
			jeuText5.setString(jeuxLine5);
		}
	}

	jeuxFile6.open("LTF/text/6-jeux6.txt");
	if (jeuxFile6.is_open())
	{
		while (std::getline(jeuxFile6, jeuxLine6))
		{
			jeuText6.setString(jeuxLine6);
		}
	}

	jeuxFile7.open("LTF/text/6-jeux7.txt");
	if (jeuxFile7.is_open())
	{
		while (std::getline(jeuxFile7, jeuxLine7))
		{
			jeuText7.setString(jeuxLine7);
		}
	}

	jeuxFile8.open("LTF/text/6-jeux8.txt");
	if (jeuxFile8.is_open())
	{
		while (std::getline(jeuxFile8, jeuxLine8))
		{
			jeuText8.setString(jeuxLine8);
		}
	}

	//

	manuelsFile1.open("LTF/text/5-manuels1.txt");
	if (manuelsFile1.is_open())
	{
		while (std::getline(manuelsFile1, manuelsLine1))
		{
			manuelText1.setString(manuelsLine1);
		}
	}

	manuelsFile2.open("LTF/text/5-manuels2.txt");
	if (manuelsFile2.is_open())
	{
		while (std::getline(manuelsFile2, manuelsLine2))
		{
			manuelText2.setString(manuelsLine2);
		}
	}

	manuelsFile3.open("LTF/text/5-manuels3.txt");
	if (manuelsFile3.is_open())
	{
		while (std::getline(manuelsFile3, manuelsLine3))
		{
			manuelText3.setString(manuelsLine3);
		}
	}

	manuelsFile4.open("LTF/text/5-manuels4.txt");
	if (manuelsFile4.is_open())
	{
		while (std::getline(manuelsFile4, manuelsLine4))
		{
			manuelText4.setString(manuelsLine4);
		}
	}

	manuelsFile5.open("LTF/text/5-manuels5.txt");
	if (manuelsFile5.is_open())
	{
		while (std::getline(manuelsFile5, manuelsLine5))
		{
			manuelText5.setString(manuelsLine5);
		}
	}

	manuelsFile6.open("LTF/text/5-manuels6.txt");
	if (manuelsFile6.is_open())
	{
		while (std::getline(manuelsFile6, manuelsLine6))
		{
			manuelText6.setString(manuelsLine6);
		}
	}

	manuelsFile7.open("LTF/text/5-manuels7.txt");
	if (manuelsFile7.is_open())
	{
		while (std::getline(manuelsFile7, manuelsLine7))
		{
			manuelText7.setString(manuelsLine7);
		}
	}

	manuelsFile8.open("LTF/text/5-manuels8.txt");
	if (manuelsFile8.is_open())
	{
		while (std::getline(manuelsFile8, manuelsLine8))
		{
			manuelText8.setString(manuelsLine8);
		}
	}

	//

	gameNameFile1.open("LTF/text/1-nomdujeu1.txt");
	if (gameNameFile1.is_open())
	{
		while (std::getline(gameNameFile1, gameNameLine1))
		{
			gameNameText1.setString(gameNameLine1);
		}
	}

	gameNameFile2.open("LTF/text/1-nomdujeu2.txt");
	if (gameNameFile2.is_open())
	{
		while (std::getline(gameNameFile2, gameNameLine2))
		{
			gameNameText2.setString(gameNameLine2);
		}
	}

	gameNameFile3.open("LTF/text/1-nomdujeu3.txt");
	if (gameNameFile3.is_open())
	{
		while (std::getline(gameNameFile3, gameNameLine3))
		{
			gameNameText3.setString(gameNameLine3);
		}
	}

	gameNameFile4.open("LTF/text/1-nomdujeu4.txt");
	if (gameNameFile4.is_open())
	{
		while (std::getline(gameNameFile4, gameNameLine4))
		{
			gameNameText4.setString(gameNameLine4);
		}
	}

	gameNameFile5.open("LTF/text/1-nomdujeu5.txt");
	if (gameNameFile5.is_open())
	{
		while (std::getline(gameNameFile5, gameNameLine5))
		{
			gameNameText5.setString(gameNameLine5);
		}
	}

	gameNameFile6.open("LTF/text/1-nomdujeu6.txt");
	if (gameNameFile6.is_open())
	{
		while (std::getline(gameNameFile6, gameNameLine6))
		{
			gameNameText6.setString(gameNameLine6);
		}
	}

	gameNameFile7.open("LTF/text/1-nomdujeu7.txt");
	if (gameNameFile7.is_open())
	{
		while (std::getline(gameNameFile7, gameNameLine7))
		{
			gameNameText7.setString(gameNameLine7);
		}
	}

	gameNameFile8.open("LTF/text/1-nomdujeu8.txt");
	if (gameNameFile8.is_open())
	{
		while (std::getline(gameNameFile8, gameNameLine8))
		{
			gameNameText8.setString(gameNameLine8);
		}
	}

	//

	developerFile1.open("LTF/text/2-développeurs1.txt");
	if (developerFile1.is_open())
	{
		while (std::getline(developerFile1, developerLine1))
		{
			developerText1.setString(developerLine1);
		}
	}

	developerFile2.open("LTF/text/2-développeurs2.txt");
	if (developerFile2.is_open())
	{
		while (std::getline(developerFile2, developerLine2))
		{
			developerText2.setString(developerLine2);
		}
	}

	developerFile3.open("LTF/text/2-développeurs3.txt");
	if (developerFile3.is_open())
	{
		while (std::getline(developerFile3, developerLine3))
		{
			developerText3.setString(developerLine3);
		}
	}

	developerFile4.open("LTF/text/2-développeurs4.txt");
	if (developerFile4.is_open())
	{
		while (std::getline(developerFile4, developerLine4))
		{
			developerText4.setString(developerLine4);
		}
	}

	developerFile5.open("LTF/text/2-développeurs5.txt");
	if (developerFile5.is_open())
	{
		while (std::getline(developerFile5, developerLine5))
		{
			developerText5.setString(developerLine5);
		}
	}

	developerFile6.open("LTF/text/2-développeurs6.txt");
	if (developerFile6.is_open())
	{
		while (std::getline(developerFile6, developerLine6))
		{
			developerText6.setString(developerLine6);
		}
	}

	developerFile7.open("LTF/text/2-développeurs7.txt");
	if (developerFile7.is_open())
	{
		while (std::getline(developerFile7, developerLine7))
		{
			developerText7.setString(developerLine7);
		}
	}

	developerFile8.open("LTF/text/2-développeurs8.txt");
	if (developerFile8.is_open())
	{
		while (std::getline(developerFile8, developerLine8))
		{
			developerText8.setString(developerLine8);
		}
	}

	//

	more1File1.open("LTF/text/3-autre1.txt");
	if (more1File1.is_open())
	{
		while (std::getline(more1File1, more1Line1))
		{
			more1Text1.setString(more1Line1);
		}
	}

	more1File2.open("LTF/text/3-autre2.txt");
	if (more1File2.is_open())
	{
		while (std::getline(more1File2, more1Line2))
		{
			more1Text2.setString(more1Line2);
		}
	}

	more1File3.open("LTF/text/3-autre3.txt");
	if (more1File3.is_open())
	{
		while (std::getline(more1File3, more1Line3))
		{
			more1Text3.setString(more1Line3);
		}
	}

	more1File4.open("LTF/text/3-autre4.txt");
	if (more1File4.is_open())
	{
		while (std::getline(more1File4, more1Line4))
		{
			more1Text4.setString(more1Line4);
		}
	}

	more1File5.open("LTF/text/3-autre5.txt");
	if (more1File5.is_open())
	{
		while (std::getline(more1File5, more1Line5))
		{
			more1Text5.setString(more1Line5);
		}
	}

	more1File6.open("LTF/text/3-autre6.txt");
	if (more1File6.is_open())
	{
		while (std::getline(more1File6, more1Line6))
		{
			more1Text6.setString(more1Line6);
		}
	}

	more1File7.open("LTF/text/3-autre7.txt");
	if (more1File7.is_open())
	{
		while (std::getline(more1File7, more1Line7))
		{
			more1Text7.setString(more1Line7);
		}
	}

	more1File8.open("LTF/text/3-autre8.txt");
	if (more1File8.is_open())
	{
		while (std::getline(more1File8, more1Line8))
		{
			more1Text8.setString(more1Line8);
		}
	}

	//

	more2File1.open("LTF/text/4-divers1.txt");
	if (more2File1.is_open())
	{
		while (std::getline(more2File1, more2Line1))
		{
			more2Text1.setString(more2Line1);
		}
	}

	more2File2.open("LTF/text/4-divers2.txt");
	if (more2File2.is_open())
	{
		while (std::getline(more2File2, more2Line2))
		{
			more2Text2.setString(more2Line2);
		}
	}

	more2File3.open("LTF/text/4-divers3.txt");
	if (more2File3.is_open())
	{
		while (std::getline(more2File3, more2Line3))
		{
			more2Text3.setString(more2Line3);
		}
	}

	more2File4.open("LTF/text/4-divers4.txt");
	if (more2File4.is_open())
	{
		while (std::getline(more2File4, more2Line4))
		{
			more2Text4.setString(more2Line4);
		}
	}

	more2File5.open("LTF/text/4-divers5.txt");
	if (more2File5.is_open())
	{
		while (std::getline(more2File5, more2Line5))
		{
			more2Text5.setString(more2Line5);
		}
	}

	more2File6.open("LTF/text/4-divers6.txt");
	if (more2File6.is_open())
	{
		while (std::getline(more2File6, more2Line6))
		{
			more2Text6.setString(more2Line6);
		}
	}

	more2File7.open("LTF/text/4-divers7.txt");
	if (more2File7.is_open())
	{
		while (std::getline(more2File7, more2Line7))
		{
			more2Text7.setString(more2Line7);
		}
	}

	more2File8.open("LTF/text/4-divers8.txt");
	if (more2File8.is_open())
	{
		while (std::getline(more2File8, more2Line8))
		{
			more2Text8.setString(more2Line8);
		}
	}

	// Create window and set icon
	window.create(sf::VideoMode(1280, 720), "Abandonware France Launcher", sf::Style::Close);
	window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
	window.setFramerateLimit(30);

	// Set cursors
	arrowCursor.loadFromSystem(sf::Cursor::Arrow);
	handCursor.loadFromSystem(sf::Cursor::Hand);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::MouseMoved:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					bool bundleHover = false;
					bool forumsHover = false;
					bool discordHover = false;
					bool abwfrHover = false;
					bool personalityHover = false;
					bool companyHover = false;
					bool magazineHover = false;
					bool biiperHover = false;
					bool exitHover = false;
					bool soundHover = false;
					bool lancerJeu1Hover = false;
					bool lancerJeu2Hover = false;
					bool lancerJeu3Hover = false;
					bool lancerJeu4Hover = false;
					bool lancerJeu5Hover = false;
					bool lancerJeu6Hover = false;
					bool lancerJeu7Hover = false;
					bool lancerJeu8Hover = false;
					bool manuel1Hover = false;
					bool manuel2Hover = false;
					bool manuel3Hover = false;
					bool manuel4Hover = false;
					bool manuel5Hover = false;
					bool manuel6Hover = false;
					bool manuel7Hover = false;
					bool manuel8Hover = false;
					bool moreButton1_1Hover = false;
					bool moreButton1_2Hover = false;
					bool moreButton2_1Hover = false;
					bool moreButton2_2Hover = false;
					bool moreButton3_1Hover = false;
					bool moreButton3_2Hover = false;
					bool moreButton4_1Hover = false;
					bool moreButton4_2Hover = false;
					bool moreButton5_1Hover = false;
					bool moreButton5_2Hover = false;
					bool moreButton6_1Hover = false;
					bool moreButton6_2Hover = false;
					bool moreButton7_1Hover = false;
					bool moreButton7_2Hover = false;
					bool moreButton8_1Hover = false;
					bool moreButton8_2Hover = false;
					bool jeu1SpriteHover = false;
					bool jeu2SpriteHover = false;
					bool jeu3SpriteHover = false;
					bool jeu4SpriteHover = false;
					bool jeu5SpriteHover = false;
					bool jeu6SpriteHover = false;
					bool jeu7SpriteHover = false;
					bool jeu8SpriteHover = false;

					if (bundleSprite.getGlobalBounds().contains(mousePosF))
					{
						bundleHover = true;
					}
					else if (forumsBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						forumsHover = true;
					}
					else if (discordBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						discordHover = true;
					}
					else if (abwfrBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						abwfrHover = true;
					}
					else if (personalityBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						personalityHover = true;
					}
					else if (companyBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						companyHover = true;
					}
					else if (magazineBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						magazineHover = true;
					}
					else if (biiperBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						biiperHover = true;
					}
					else if (exitBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						exitHover = true;
					}
					else if (soundBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						soundHover = true;
					}
					else if (lancerJeu1Sprite.getGlobalBounds().contains(mousePosF))
					{
						lancerJeu1Hover = true;
					}
					else if (lancerJeu2Sprite.getGlobalBounds().contains(mousePosF))
					{
						lancerJeu2Hover = true;
					}
					else if (lancerJeu3Sprite.getGlobalBounds().contains(mousePosF))
					{
						lancerJeu3Hover = true;
					}
					else if (lancerJeu4Sprite.getGlobalBounds().contains(mousePosF))
					{
						lancerJeu4Hover = true;
					}
					else if (lancerJeu5Sprite.getGlobalBounds().contains(mousePosF))
					{
						lancerJeu5Hover = true;
					}
					else if (lancerJeu6Sprite.getGlobalBounds().contains(mousePosF))
					{
						lancerJeu6Hover = true;
					}
					else if (lancerJeu7Sprite.getGlobalBounds().contains(mousePosF))
					{
						lancerJeu7Hover = true;
					}
					else if (lancerJeu8Sprite.getGlobalBounds().contains(mousePosF))
					{
						lancerJeu8Hover = true;
					}

					//

					else if (manuel1Sprite.getGlobalBounds().contains(mousePosF))
					{
						manuel1Hover = true;
					}
					else if (manuel2Sprite.getGlobalBounds().contains(mousePosF))
					{
						manuel2Hover = true;
					}
					else if (manuel3Sprite.getGlobalBounds().contains(mousePosF))
					{
						manuel3Hover = true;
					}
					else if (manuel4Sprite.getGlobalBounds().contains(mousePosF))
					{
						manuel4Hover = true;
					}
					else if (manuel5Sprite.getGlobalBounds().contains(mousePosF))
					{
						manuel5Hover = true;
					}
					else if (manuel6Sprite.getGlobalBounds().contains(mousePosF))
					{
						manuel6Hover = true;
					}
					else if (manuel7Sprite.getGlobalBounds().contains(mousePosF))
					{
						manuel7Hover = true;
					}
					else if (manuel8Sprite.getGlobalBounds().contains(mousePosF))
					{
						manuel8Hover = true;
					}

					//

					else if (moreButton1_1Sprite.getGlobalBounds().contains(mousePosF))
					{
						moreButton1_1Hover = true;
					}
					else if (moreButton1_2Sprite.getGlobalBounds().contains(mousePosF))
					{
						moreButton1_2Hover = true;
					}
					else if (moreButton2_1Sprite.getGlobalBounds().contains(mousePosF))
					{
						moreButton2_1Hover = true;
					}
					else if (moreButton2_2Sprite.getGlobalBounds().contains(mousePosF))
					{
						moreButton2_2Hover = true;
					}
					else if (moreButton3_1Sprite.getGlobalBounds().contains(mousePosF))
					{
						moreButton3_1Hover = true;
					}
					else if (moreButton3_2Sprite.getGlobalBounds().contains(mousePosF))
					{
						moreButton3_2Hover = true;
					}
					else if (moreButton4_1Sprite.getGlobalBounds().contains(mousePosF))
					{
						moreButton4_1Hover = true;
					}
					else if (moreButton4_2Sprite.getGlobalBounds().contains(mousePosF))
					{
						moreButton4_2Hover = true;
					}
					else if (moreButton5_1Sprite.getGlobalBounds().contains(mousePosF))
					{
					moreButton5_1Hover = true;
					}
					else if (moreButton5_2Sprite.getGlobalBounds().contains(mousePosF))
					{
					moreButton5_2Hover = true;
					}
					else if (moreButton6_1Sprite.getGlobalBounds().contains(mousePosF))
					{
					moreButton6_1Hover = true;
					}
					else if (moreButton6_2Sprite.getGlobalBounds().contains(mousePosF))
					{
					moreButton6_2Hover = true;
					}
					else if (moreButton7_1Sprite.getGlobalBounds().contains(mousePosF))
					{
					moreButton7_1Hover = true;
					}
					else if (moreButton7_2Sprite.getGlobalBounds().contains(mousePosF))
					{
					moreButton7_2Hover = true;
					}
					else if (moreButton8_1Sprite.getGlobalBounds().contains(mousePosF))
					{
					moreButton8_1Hover = true;
					}
					else if (moreButton8_2Sprite.getGlobalBounds().contains(mousePosF))
					{
					moreButton8_2Hover = true;
					}

					//

					else if (jeu1Sprite.getGlobalBounds().contains(mousePosF))
					{
						     jeu1SpriteHover = true;
					}

					else if (jeu2Sprite.getGlobalBounds().contains(mousePosF))
					{
						     jeu2SpriteHover = true;
					}

					else if (jeu3Sprite.getGlobalBounds().contains(mousePosF))
					{
					        jeu3SpriteHover = true;
					}

					else if (jeu4Sprite.getGlobalBounds().contains(mousePosF))
					{
					jeu4SpriteHover = true;
					}

					else if (jeu5Sprite.getGlobalBounds().contains(mousePosF))
					{
					jeu5SpriteHover = true;
					}

					else if (jeu6Sprite.getGlobalBounds().contains(mousePosF))
					{
					jeu6SpriteHover = true;
					}

					else if (jeu7Sprite.getGlobalBounds().contains(mousePosF))
					{
					jeu7SpriteHover = true;
					}

					else if (jeu8Sprite.getGlobalBounds().contains(mousePosF))
					{
					jeu8SpriteHover = true;
					}

					//

					if (forumsHover)
					{
						forumsBackgroundSprite.setTexture(buttonHoveredTexture);
					}
					else
					{
						forumsBackgroundSprite.setTexture(buttonUnhoveredTexture);
					}

					if (discordHover)
					{
						discordBackgroundSprite.setTexture(buttonHoveredTexture);
					}
					else
					{
						discordBackgroundSprite.setTexture(buttonUnhoveredTexture);
					}

					if (abwfrHover)
					{
						abwfrBackgroundSprite.setTexture(buttonHoveredTexture);
					}
					else
					{
						abwfrBackgroundSprite.setTexture(buttonUnhoveredTexture);
					}

					if (personalityHover)
					{
						personalityBackgroundSprite.setTexture(buttonHoveredTexture);
					}
					else
					{
						personalityBackgroundSprite.setTexture(buttonUnhoveredTexture);
					}

					if (companyHover)
					{
						companyBackgroundSprite.setTexture(buttonHoveredTexture);
					}
					else
					{
						companyBackgroundSprite.setTexture(buttonUnhoveredTexture);
					}

					if (magazineHover)
					{
						magazineBackgroundSprite.setTexture(buttonHoveredTexture);
					}
					else
					{
						magazineBackgroundSprite.setTexture(buttonUnhoveredTexture);
					}

					if (biiperHover)
					{
						biiperBackgroundSprite.setTexture(buttonHoveredTexture);
					}
					else
					{
						biiperBackgroundSprite.setTexture(buttonUnhoveredTexture);
					}

					if (exitHover)
					{
						exitBackgroundSprite.setTexture(smallButtonHoveredTexture);
					}
					else
					{
						exitBackgroundSprite.setTexture(smallButtonUnhoveredTexture);
					}

					if (soundHover)
					{
						soundBackgroundSprite.setTexture(smallButtonHoveredTexture);
					}
					else
					{
						soundBackgroundSprite.setTexture(smallButtonUnhoveredTexture);
					}

					//

					if (lancerJeu1Hover)
					{
						lancerJeu1Sprite.setTexture(jeuButtonHoveredTexture1);
					}
					else
					{
						lancerJeu1Sprite.setTexture(jeuButtonUnhoveredTexture1);
					}

					if (lancerJeu2Hover)
					{
						lancerJeu2Sprite.setTexture(jeuButtonHoveredTexture2);
					}
					else
					{
						lancerJeu2Sprite.setTexture(jeuButtonUnhoveredTexture2);
					}

					if (lancerJeu3Hover)
					{
						lancerJeu3Sprite.setTexture(jeuButtonHoveredTexture3);
					}
					else
					{
						lancerJeu3Sprite.setTexture(jeuButtonUnhoveredTexture3);
					}

					if (lancerJeu4Hover)
					{
						lancerJeu4Sprite.setTexture(jeuButtonHoveredTexture4);
					}
					else
					{
						lancerJeu4Sprite.setTexture(jeuButtonUnhoveredTexture4);
					}

					if (lancerJeu5Hover)
					{
						lancerJeu5Sprite.setTexture(jeuButtonHoveredTexture5);
					}
					else
					{
						lancerJeu5Sprite.setTexture(jeuButtonUnhoveredTexture5);
					}

					if (lancerJeu6Hover)
					{
						lancerJeu6Sprite.setTexture(jeuButtonHoveredTexture6);
					}
					else
					{
						lancerJeu6Sprite.setTexture(jeuButtonUnhoveredTexture6);
					}

					if (lancerJeu7Hover)
					{
						lancerJeu7Sprite.setTexture(jeuButtonHoveredTexture7);
					}
					else
					{
						lancerJeu7Sprite.setTexture(jeuButtonUnhoveredTexture7);
					}

					if (lancerJeu8Hover)
					{
						lancerJeu8Sprite.setTexture(jeuButtonHoveredTexture8);
					}
					else
					{
						lancerJeu8Sprite.setTexture(jeuButtonUnhoveredTexture8);
					}

					//

					if (manuel1Hover)
					{
						manuel1Sprite.setTexture(manuelsButtonHoveredTexture1);
					}
					else
					{
						manuel1Sprite.setTexture(manuelsButtonUnhoveredTexture1);
					}

					if (manuel2Hover)
					{
						manuel2Sprite.setTexture(manuelsButtonHoveredTexture2);
					}
					else
					{
						manuel2Sprite.setTexture(manuelsButtonUnhoveredTexture2);
					}

					if (manuel3Hover)
					{
						manuel3Sprite.setTexture(manuelsButtonHoveredTexture3);
					}
					else
					{
						manuel3Sprite.setTexture(manuelsButtonUnhoveredTexture3);
					}

					if (manuel4Hover)
					{
						manuel4Sprite.setTexture(manuelsButtonHoveredTexture4);
					}
					else
					{
						manuel4Sprite.setTexture(manuelsButtonUnhoveredTexture4);
					}

					if (manuel5Hover)
					{
						manuel5Sprite.setTexture(manuelsButtonHoveredTexture5);
					}
					else
					{
						manuel5Sprite.setTexture(manuelsButtonUnhoveredTexture5);
					}

					if (manuel6Hover)
					{
						manuel6Sprite.setTexture(manuelsButtonHoveredTexture6);
					}
					else
					{
						manuel6Sprite.setTexture(manuelsButtonUnhoveredTexture6);
					}

					if (manuel7Hover)
					{
						manuel7Sprite.setTexture(manuelsButtonHoveredTexture7);
					}
					else
					{
						manuel7Sprite.setTexture(manuelsButtonUnhoveredTexture7);
					}

					if (manuel8Hover)
					{
						manuel8Sprite.setTexture(manuelsButtonHoveredTexture8);
					}
					else
					{
						manuel8Sprite.setTexture(manuelsButtonUnhoveredTexture8);
					}

					//

					if (moreButton1_1Hover)
					{
						moreButton1_1Sprite.setTexture(autreButtonHovered1Texture);
					}
					else
					{
						moreButton1_1Sprite.setTexture(autreButtonUnhovered1Texture);
					}

					if (moreButton1_2Hover)
					{
						moreButton1_2Sprite.setTexture(diversButtonHovered1Texture);
					}
					else
					{
						moreButton1_2Sprite.setTexture(diversButtonUnhovered1Texture);
					}

					if (moreButton2_1Hover)
					{
						moreButton2_1Sprite.setTexture(autreButtonHovered2Texture);
					}
					else
					{
						moreButton2_1Sprite.setTexture(autreButtonUnhovered2Texture);
					}

					if (moreButton2_2Hover)
					{
						moreButton2_2Sprite.setTexture(diversButtonHovered2Texture);
					}
					else
					{
						moreButton2_2Sprite.setTexture(diversButtonUnhovered2Texture);
					}

					if (moreButton3_1Hover)
					{
						moreButton3_1Sprite.setTexture(autreButtonHovered3Texture);
					}
					else
					{
						moreButton3_1Sprite.setTexture(autreButtonUnhovered3Texture);
					}

					if (moreButton3_2Hover)
					{
						moreButton3_2Sprite.setTexture(diversButtonHovered3Texture);
					}
					else
					{
						moreButton3_2Sprite.setTexture(diversButtonUnhovered3Texture);
					}

					if (moreButton4_1Hover)
					{
						moreButton4_1Sprite.setTexture(autreButtonHovered4Texture);
					}
					else
					{
						moreButton4_1Sprite.setTexture(autreButtonUnhovered4Texture);
					}

					if (moreButton4_2Hover)
					{
						moreButton4_2Sprite.setTexture(diversButtonHovered4Texture);
					}
					else
					{
						moreButton4_2Sprite.setTexture(diversButtonUnhovered4Texture);
					}

					if (moreButton5_1Hover)
					{
						moreButton5_1Sprite.setTexture(autreButtonHovered5Texture);
					}
					else
					{
						moreButton5_1Sprite.setTexture(autreButtonUnhovered5Texture);
					}

					if (moreButton5_2Hover)
					{
						moreButton5_2Sprite.setTexture(diversButtonHovered5Texture);
					}
					else
					{
						moreButton5_2Sprite.setTexture(diversButtonUnhovered5Texture);
					}

					if (moreButton6_1Hover)
					{
						moreButton6_1Sprite.setTexture(autreButtonHovered6Texture);
					}
					else
					{
						moreButton6_1Sprite.setTexture(autreButtonUnhovered6Texture);
					}

					if (moreButton6_2Hover)
					{
						moreButton6_2Sprite.setTexture(diversButtonHovered6Texture);
					}
					else
					{
						moreButton6_2Sprite.setTexture(diversButtonUnhovered6Texture);
					}

					if (moreButton7_1Hover)
					{
						moreButton7_1Sprite.setTexture(autreButtonHovered7Texture);
					}
					else
					{
						moreButton7_1Sprite.setTexture(autreButtonUnhovered7Texture);
					}

					if (moreButton7_2Hover)
					{
						moreButton7_2Sprite.setTexture(diversButtonHovered7Texture);
					}
					else
					{
						moreButton7_2Sprite.setTexture(diversButtonUnhovered7Texture);
					}

					if (moreButton8_1Hover)
					{
						moreButton8_1Sprite.setTexture(autreButtonHovered8Texture);
					}
					else
					{
						moreButton8_1Sprite.setTexture(autreButtonUnhovered8Texture);
					}

					if (moreButton8_2Hover)
					{
						moreButton8_2Sprite.setTexture(diversButtonHovered8Texture);
					}
					else
					{
						moreButton8_2Sprite.setTexture(diversButtonUnhovered8Texture);
					}

					if (bundleHover || forumsHover || discordHover || abwfrHover || personalityHover || companyHover ||  magazineHover || biiperHover || exitHover || soundHover || lancerJeu1Hover || lancerJeu2Hover || lancerJeu3Hover || lancerJeu4Hover || lancerJeu5Hover || lancerJeu6Hover || lancerJeu7Hover || lancerJeu8Hover || manuel1Hover || manuel2Hover || manuel3Hover || manuel4Hover || manuel5Hover || manuel6Hover || manuel7Hover || manuel8Hover || moreButton1_1Hover || moreButton1_2Hover || moreButton2_1Hover || moreButton2_2Hover || moreButton3_1Hover || moreButton3_2Hover || moreButton4_1Hover || moreButton4_2Hover || moreButton5_1Hover || moreButton5_2Hover || moreButton6_1Hover || moreButton6_2Hover || moreButton7_1Hover || moreButton7_2Hover || moreButton8_1Hover || moreButton8_2Hover || jeu1SpriteHover || jeu2SpriteHover ||  jeu3SpriteHover || jeu4SpriteHover || jeu5SpriteHover || jeu6SpriteHover || jeu7SpriteHover || jeu8SpriteHover)
					{
						window.setMouseCursor(handCursor);
					}
					else
					{
						window.setMouseCursor(arrowCursor);
					}
				}
			break;
			case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));

					if (bundleSprite.getGlobalBounds().contains(mousePosF))
					{
						system("start http://abandonware-france.org/");
						break;
					}

					if (forumsBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						system("start https://www.abandonware-forums.org/");
						break;
					}

					if (discordBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						system("start http://discord.gg/uqBRxYs");
						break;
					}

					if (abwfrBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						system("start http://abandonware-france.org/");
						break;
					}

					if (personalityBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						system("start https://www.abandonware-france.org/personnalites/");
						break;
					}

					if (companyBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						system("start https://www.abandonware-france.org/compagnies/");
						break;
					}

					if (magazineBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						system("start https://abandonware-france.org/bibliotheque/magazines/");
						break;
					}

					if (biiperBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						system("start https://abandonware-france.org/biiper/");
						break;
					}

					if (lancerJeu1Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call jeu1/lancer.bat");
						{
							if (isMuted)
							{
								isMuted = false;
							}
							else
							{
								isMuted = true;
							}
						}

						if (isMuted)
						{
							music.pause();
							soundSprite.setTexture(soundoffTexture);
						}
						//return 0;
					}

					if (lancerJeu2Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call jeu2/lancer.bat");
						{
							if (isMuted)
							{
								isMuted = false;
							}
							else
							{
								isMuted = true;
							}
						}

						if (isMuted)
						{
							music.pause();
							soundSprite.setTexture(soundoffTexture);
						}
						//return 0;
					}

					if (lancerJeu3Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call jeu3/lancer.bat");
						{
							if (isMuted)
							{
								isMuted = false;
							}
							else
							{
								isMuted = true;
							}
						}

						if (isMuted)
						{
							music.pause();
							soundSprite.setTexture(soundoffTexture);
						}
						//return 0;
					}

					if (lancerJeu4Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call jeu4/lancer.bat");
						{
							if (isMuted)
							{
								isMuted = false;
							}
							else
							{
								isMuted = true;
							}
						}

						if (isMuted)
						{
							music.pause();
							soundSprite.setTexture(soundoffTexture);
						}
						//return 0;
					}

					if (lancerJeu5Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call jeu5/lancer.bat");
						{
							if (isMuted)
							{
								isMuted = false;
							}
							else
							{
								isMuted = true;
							}
						}

						if (isMuted)
						{
							music.pause();
							soundSprite.setTexture(soundoffTexture);
						}
						//return 0;
					}

					if (lancerJeu6Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call jeu6/lancer.bat");
						{
							if (isMuted)
							{
								isMuted = false;
							}
							else
							{
								isMuted = true;
							}
						}

						if (isMuted)
						{
							music.pause();
							soundSprite.setTexture(soundoffTexture);
						}
						//return 0;
					}

					if (lancerJeu7Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call jeu7/lancer.bat");
						{
							if (isMuted)
							{
								isMuted = false;
							}
							else
							{
								isMuted = true;
							}
						}

						if (isMuted)
						{
							music.pause();
							soundSprite.setTexture(soundoffTexture);
						}
						//return 0;
					}

					if (lancerJeu8Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call jeu8/lancer.bat");
						{
							if (isMuted)
							{
								isMuted = false;
							}
							else
							{
								isMuted = true;
							}
						}

						if (isMuted)
						{
							music.pause();
							soundSprite.setTexture(soundoffTexture);
						}
						//return 0;
					}

					//

					if (jeu1Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call jeu1/lancer.bat");
						{
							if (isMuted)
							{
								isMuted = false;
							}
							else
							{
								isMuted = true;
							}
						}

						if (isMuted)
						{
							music.pause();
							soundSprite.setTexture(soundoffTexture);
						}
						//return 0;
					}

					if (jeu2Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call jeu2/lancer.bat");
						{
							if (isMuted)
							{
								isMuted = false;
							}
							else
							{
								isMuted = true;
							}
						}

						if (isMuted)
						{
							music.pause();
							soundSprite.setTexture(soundoffTexture);
						}
						//return 0;
					}

					if (jeu3Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call jeu3/lancer.bat");
						{
							if (isMuted)
							{
								isMuted = false;
							}
							else
							{
								isMuted = true;
							}
						}

						if (isMuted)
						{
							music.pause();
							soundSprite.setTexture(soundoffTexture);
						}
						//return 0;
					}

					if (jeu4Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call jeu4/lancer.bat");
						{
							if (isMuted)
							{
								isMuted = false;
							}
							else
							{
								isMuted = true;
							}
						}

						if (isMuted)
						{
							music.pause();
							soundSprite.setTexture(soundoffTexture);
						}
						//return 0;
					}

					if (jeu5Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call jeu5/lancer.bat");
						{
							if (isMuted)
							{
								isMuted = false;
							}
							else
							{
								isMuted = true;
							}
						}

						if (isMuted)
						{
							music.pause();
							soundSprite.setTexture(soundoffTexture);
						}
						//return 0;
					}

					if (jeu6Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call jeu6/lancer.bat");
						{
							if (isMuted)
							{
								isMuted = false;
							}
							else
							{
								isMuted = true;
							}
						}

						if (isMuted)
						{
							music.pause();
							soundSprite.setTexture(soundoffTexture);
						}
						//return 0;
					}

					if (jeu7Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call jeu7/lancer.bat");
						{
							if (isMuted)
							{
								isMuted = false;
							}
							else
							{
								isMuted = true;
							}
						}

						if (isMuted)
						{
							music.pause();
							soundSprite.setTexture(soundoffTexture);
						}
						//return 0;
					}

					if (jeu8Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call jeu8/lancer.bat");
						{
							if (isMuted)
							{
								isMuted = false;
							}
							else
							{
								isMuted = true;
							}
						}

						if (isMuted)
						{
							music.pause();
							soundSprite.setTexture(soundoffTexture);
						}
						//return 0;
					}


					//

					if (manuel1Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/manuel-1.bat");
						break;
					}

					if (manuel2Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/manuel-2.bat");
						break;
					}

					if (manuel3Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/manuel-3.bat");
						break;
					}

					if (manuel4Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/manuel-4.bat");
						break;
					}

					if (manuel5Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/manuel-5.bat");
						break;
					}

					if (manuel6Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/manuel-6.bat");
						break;
					}

					if (manuel7Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/manuel-7.bat");
						break;
					}

					if (manuel8Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/manuel-8.bat");
						break;
					}

					//

					if (moreButton1_1Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/autre-jeu-1.bat");
						break;
					}

					if (moreButton1_2Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/divers-jeu-1.bat");
						break;
					}

					if (moreButton2_1Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/autre-jeu-2.bat");
						break;
					}

					if (moreButton2_2Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/divers-jeu-2.bat");
						break;
					}

					if (moreButton3_1Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/autre-jeu-3.bat");
						break;
					}

					if (moreButton3_2Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/divers-jeu-3.bat");
						break;
					}

					if (moreButton4_1Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/autre-jeu-4.bat");
						break;
					}

					if (moreButton4_2Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/divers-jeu-4.bat");
						break;
					}

					if (moreButton5_1Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/autre-jeu-5.bat");
						break;
					}

					if (moreButton5_2Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/divers-jeu-5.bat");
						break;
					}

					if (moreButton6_1Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/autre-jeu-6.bat");
						break;
					}

					if (moreButton6_2Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/divers-jeu-6.bat");
						break;
					}

					if (moreButton7_1Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/autre-jeu-7.bat");
						break;
					}

					if (moreButton7_2Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/divers-jeu-7.bat");
						break;
					}

					if (moreButton8_1Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/autre-jeu-8.bat");
						break;
					}

					if (moreButton8_2Sprite.getGlobalBounds().contains(mousePosF))
					{
						system("call LTF/divers-jeu-8.bat");
						break;
					}
			
					//

					if (backgroundSprite1.getGlobalBounds().contains(mousePosF))
					{
						break;
					}

					if (backgroundSprite3.getGlobalBounds().contains(mousePosF))
					{
						break;
					}

					if (exitBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						return 0;
					}

					if (soundBackgroundSprite.getGlobalBounds().contains(mousePosF))
					{
						if (isMuted)
						{
							isMuted = false;
						}
						else
						{
							isMuted = true;
						}
					}

					if (isMuted)
					{
						music.pause();
						soundSprite.setTexture(soundoffTexture);
					}
					else
					{
						music.play();
						soundSprite.setTexture(soundonTexture);
					}

				}
				break;
			}
		}

		window.clear();
		window.draw(backgroundSprite1);
		window.draw(backgroundSprite2);
		window.draw(backgroundSprite3);
		window.draw(bundleSprite);
		window.draw(forumsBackgroundSprite);
		window.draw(discordBackgroundSprite);
		window.draw(abwfrBackgroundSprite);
		window.draw(personalityBackgroundSprite);
		window.draw(companyBackgroundSprite);
		window.draw(magazineBackgroundSprite);
		window.draw(biiperBackgroundSprite);
		window.draw(exitBackgroundSprite);
		window.draw(soundBackgroundSprite);
		window.draw(lancerJeu1Sprite);
		window.draw(lancerJeu2Sprite);
		window.draw(lancerJeu3Sprite);
		window.draw(lancerJeu4Sprite);
		window.draw(lancerJeu5Sprite);
		window.draw(lancerJeu6Sprite);
		window.draw(lancerJeu7Sprite);
		window.draw(lancerJeu8Sprite);
		window.draw(jeu1Sprite);
		window.draw(jeu2Sprite);
		window.draw(jeu3Sprite);
		window.draw(jeu4Sprite);
		window.draw(jeu5Sprite);
		window.draw(jeu6Sprite);
		window.draw(jeu7Sprite);
		window.draw(jeu8Sprite);
		window.draw(manuel1Sprite);
		window.draw(manuel2Sprite);
		window.draw(manuel3Sprite);
		window.draw(manuel4Sprite);
		window.draw(manuel5Sprite);
		window.draw(manuel6Sprite);
		window.draw(manuel7Sprite);
		window.draw(manuel8Sprite);
		window.draw(exitSprite);
		window.draw(soundSprite);
		window.draw(moreButton1_1Sprite);
		window.draw(moreButton2_1Sprite);
		window.draw(moreButton3_1Sprite);
		window.draw(moreButton4_1Sprite);
		window.draw(moreButton5_1Sprite);
		window.draw(moreButton6_1Sprite);
		window.draw(moreButton7_1Sprite);
		window.draw(moreButton8_1Sprite);
		window.draw(moreButton1_2Sprite);
		window.draw(moreButton2_2Sprite);
		window.draw(moreButton3_2Sprite);
		window.draw(moreButton4_2Sprite);
		window.draw(moreButton5_2Sprite);
		window.draw(moreButton6_2Sprite);
		window.draw(moreButton7_2Sprite);
		window.draw(moreButton8_2Sprite);
		window.draw(forumsText);
		window.draw(discordText);
		window.draw(abwfrText);
		window.draw(personalityText);
		window.draw(companyText);
		window.draw(magazineText);
		window.draw(biiperText);
		window.draw(versionText);
		window.draw(jeuText1);
		window.draw(jeuText2);
		window.draw(jeuText3);
		window.draw(jeuText4);
		window.draw(jeuText5);
		window.draw(jeuText6);
		window.draw(jeuText7);
		window.draw(jeuText8);
		window.draw(manuelText1);
		window.draw(manuelText2);
		window.draw(manuelText3);
		window.draw(manuelText4);
		window.draw(manuelText5);
		window.draw(manuelText6);
		window.draw(manuelText7);
		window.draw(manuelText8);
		window.draw(gameNameText1);
		window.draw(gameNameText2);
		window.draw(gameNameText3);
		window.draw(gameNameText4);
		window.draw(gameNameText5);
		window.draw(gameNameText6);
		window.draw(gameNameText7);
		window.draw(gameNameText8);
		window.draw(developerText1);
		window.draw(developerText2);
		window.draw(developerText3);
		window.draw(developerText4);
		window.draw(developerText5);
		window.draw(developerText6);
		window.draw(developerText7);
		window.draw(developerText8);
		window.draw(more1Text1);
		window.draw(more1Text2);
		window.draw(more1Text3);
		window.draw(more1Text4);
		window.draw(more1Text5);
		window.draw(more1Text6);
		window.draw(more1Text7);
		window.draw(more1Text8);
		window.draw(more2Text1);
		window.draw(more2Text2);
		window.draw(more2Text3);
		window.draw(more2Text4);
		window.draw(more2Text5);
		window.draw(more2Text6);
		window.draw(more2Text7);
		window.draw(more2Text8);
		window.display();
	}
	return 0;
}