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
	sf::Texture manuelsButtonHoveredTexture1;
	sf::Texture manuelsButtonHoveredTexture2;
	sf::Texture manuelsButtonHoveredTexture3;
	sf::Texture manuelsButtonHoveredTexture4;
	sf::Texture jeuButtonUnhoveredTexture1;
	sf::Texture jeuButtonUnhoveredTexture2;
	sf::Texture jeuButtonUnhoveredTexture3;
	sf::Texture jeuButtonUnhoveredTexture4;
	sf::Texture manuelsButtonUnhoveredTexture1;
	sf::Texture manuelsButtonUnhoveredTexture2;
	sf::Texture manuelsButtonUnhoveredTexture3;
	sf::Texture manuelsButtonUnhoveredTexture4;
	sf::Texture autreButtonHovered1Texture;
	sf::Texture autreButtonHovered2Texture;
	sf::Texture autreButtonHovered3Texture;
	sf::Texture autreButtonHovered4Texture;
	sf::Texture diversButtonHovered1Texture;
	sf::Texture diversButtonHovered2Texture;
	sf::Texture diversButtonHovered3Texture;
	sf::Texture diversButtonHovered4Texture;
	sf::Texture autreButtonUnhovered1Texture;
	sf::Texture autreButtonUnhovered2Texture;
	sf::Texture autreButtonUnhovered3Texture;
	sf::Texture autreButtonUnhovered4Texture;
	sf::Texture diversButtonUnhovered1Texture;
	sf::Texture diversButtonUnhovered2Texture;
	sf::Texture diversButtonUnhovered3Texture;
	sf::Texture diversButtonUnhovered4Texture;
	sf::Sprite moreButton1_1Sprite;
	sf::Sprite moreButton1_2Sprite;
	sf::Sprite moreButton2_1Sprite;
	sf::Sprite moreButton2_2Sprite;
	sf::Sprite moreButton3_1Sprite;
	sf::Sprite moreButton3_2Sprite;
	sf::Sprite moreButton4_1Sprite;
	sf::Sprite moreButton4_2Sprite;
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
	sf::Sprite jeu1Sprite;
	sf::Sprite jeu2Sprite;
	sf::Sprite jeu3Sprite;
	sf::Sprite jeu4Sprite;
	sf::Sprite lancerJeu1Sprite;
	sf::Sprite lancerJeu2Sprite;
	sf::Sprite lancerJeu3Sprite;
	sf::Sprite lancerJeu4Sprite;
	sf::Sprite manuel1Sprite;
	sf::Sprite manuel2Sprite;
	sf::Sprite manuel3Sprite;
	sf::Sprite manuel4Sprite;
	std::ifstream versionFile;
	std::ifstream gameNameFile1;
	std::ifstream gameNameFile2;
	std::ifstream gameNameFile3;
	std::ifstream gameNameFile4;
	std::ifstream developerFile1;
	std::ifstream developerFile2;
	std::ifstream developerFile3;
	std::ifstream developerFile4;
	std::ifstream more1File1;
	std::ifstream more1File2;
	std::ifstream more1File3;
	std::ifstream more1File4;
	std::ifstream more2File1;
	std::ifstream more2File2;
	std::ifstream more2File3;
	std::ifstream more2File4;
	std::ifstream manuelsFile1;
	std::ifstream manuelsFile2;
	std::ifstream manuelsFile3;
	std::ifstream manuelsFile4;
	std::ifstream jeuxFile1;
	std::ifstream jeuxFile2;
	std::ifstream jeuxFile3;
	std::ifstream jeuxFile4;
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
	sf::Text manuelText1;
	sf::Text manuelText2;
	sf::Text manuelText3;
	sf::Text manuelText4;
	sf::Text versionText;
	sf::Text gameNameText1;
	sf::Text gameNameText2;
	sf::Text gameNameText3;
	sf::Text gameNameText4;
	sf::Text developerText1;
	sf::Text developerText2;
	sf::Text developerText3;
	sf::Text developerText4;
	sf::Text more1Text1;
	sf::Text more1Text2;
	sf::Text more1Text3;
	sf::Text more1Text4;
	sf::Text more2Text1;
	sf::Text more2Text2;
	sf::Text more2Text3;
	sf::Text more2Text4;
	std::string versionLine;
	std::string gameNameLine1;
	std::string gameNameLine2;
	std::string gameNameLine3;
	std::string gameNameLine4;
	std::string developerLine1;
	std::string developerLine2;
	std::string developerLine3;
	std::string developerLine4;
	std::string more1Line1;
	std::string more1Line2;
	std::string more1Line3;
	std::string more1Line4;
	std::string more2Line1;
	std::string more2Line2;
	std::string more2Line3;
	std::string more2Line4;
	std::string manuelsLine1;
	std::string manuelsLine2;
	std::string manuelsLine3;
	std::string manuelsLine4;
	std::string jeuxLine1;
	std::string jeuxLine2;
	std::string jeuxLine3;
	std::string jeuxLine4;
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
	gameNameText1.setCharacterSize(20);
	gameNameText1.setPosition(335, 470);
	gameNameText2.setFont(RobotoCondensed);
	gameNameText2.setCharacterSize(20);
	gameNameText2.setPosition(570, 470);
	gameNameText3.setFont(RobotoCondensed);
	gameNameText3.setCharacterSize(20);
	gameNameText3.setPosition(805, 470);
	gameNameText4.setFont(RobotoCondensed);
	gameNameText4.setCharacterSize(20);
	gameNameText4.setPosition(1040, 470);
	developerText1.setFont(RobotoCondensed);
	developerText1.setCharacterSize(16);
	developerText1.setPosition(335, 504);
	developerText1.setFillColor(sf::Color(23, 146, 191));
	developerText2.setFont(RobotoCondensed);
	developerText2.setCharacterSize(16);
	developerText2.setPosition(570, 504);
	developerText2.setFillColor(sf::Color(23, 146, 191));
	developerText3.setFont(RobotoCondensed);
	developerText3.setCharacterSize(16);
	developerText3.setPosition(805, 504);
	developerText3.setFillColor(sf::Color(23, 146, 191));
	developerText4.setFont(RobotoCondensed);
	developerText4.setCharacterSize(16);
	developerText4.setPosition(1040, 504);
	developerText4.setFillColor(sf::Color(23, 146, 191));
	more1Text1.setFont(RobotoCondensed);
	more1Text1.setCharacterSize(16);
	more1Text1.setPosition(335, 603);
	more1Text2.setFont(RobotoCondensed);
	more1Text2.setCharacterSize(16);
	more1Text2.setPosition(570, 603);
	more1Text3.setFont(RobotoCondensed);
	more1Text3.setCharacterSize(16);
	more1Text3.setPosition(805, 603);
	more1Text4.setFont(RobotoCondensed);
	more1Text4.setCharacterSize(16);
	more1Text4.setPosition(1040, 603);
	more2Text1.setFont(RobotoCondensed);
	more2Text1.setCharacterSize(16);
	more2Text1.setPosition(335, 634);
	more2Text2.setFont(RobotoCondensed);
	more2Text2.setCharacterSize(16);
	more2Text2.setPosition(570, 634);
	more2Text3.setFont(RobotoCondensed);
	more2Text3.setCharacterSize(16);
	more2Text3.setPosition(805, 634);
	more2Text4.setFont(RobotoCondensed);
	more2Text4.setCharacterSize(16);
	more2Text4.setPosition(1040, 634);
	manuelText1.setFont(RobotoCondensed);
	manuelText1.setCharacterSize(16);
	manuelText1.setPosition(335, 572);
	manuelText2.setFont(RobotoCondensed);
	manuelText2.setCharacterSize(16);
	manuelText2.setPosition(570, 572);
	manuelText3.setFont(RobotoCondensed);
	manuelText3.setCharacterSize(16);
	manuelText3.setPosition(805, 572);
	manuelText4.setFont(RobotoCondensed);
	manuelText4.setCharacterSize(16);
	manuelText4.setPosition(1040, 572);
	jeuText1.setFont(RobotoCondensed);
	jeuText1.setCharacterSize(16);
	jeuText1.setPosition(335, 541);
	jeuText2.setFont(RobotoCondensed);
	jeuText2.setCharacterSize(16);
	jeuText2.setPosition(570, 541);
	jeuText3.setFont(RobotoCondensed);
	jeuText3.setCharacterSize(16);
	jeuText3.setPosition(805, 541);
	jeuText4.setFont(RobotoCondensed);
	jeuText4.setCharacterSize(16);
	jeuText4.setPosition(1040, 541);



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
	forumsBackgroundSprite.setPosition(0, 161);
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
	lancerJeu1Sprite.setTexture(jeuButtonUnhoveredTexture1);
	lancerJeu1Sprite.setPosition(335, 535);
	lancerJeu2Sprite.setTexture(jeuButtonUnhoveredTexture2);
	lancerJeu2Sprite.setPosition(570, 535);
	lancerJeu3Sprite.setTexture(jeuButtonUnhoveredTexture3);
	lancerJeu3Sprite.setPosition(805, 535);
	lancerJeu4Sprite.setTexture(jeuButtonUnhoveredTexture4);
	lancerJeu4Sprite.setPosition(1040, 535);
	manuel1Sprite.setTexture(manuelsButtonUnhoveredTexture1);
	manuel1Sprite.setPosition(335, 566);
	manuel2Sprite.setTexture(manuelsButtonUnhoveredTexture2);
	manuel2Sprite.setPosition(570, 566);
	manuel3Sprite.setTexture(manuelsButtonUnhoveredTexture3);
	manuel3Sprite.setPosition(805, 566);
	manuel4Sprite.setTexture(manuelsButtonUnhoveredTexture4);
	manuel4Sprite.setPosition(1040, 566);

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
	jeu1Sprite.setPosition(335, 100);

	if (!jeu2Texture.loadFromFile("LTF/imgs/jeu2.png"))
	{
		std::cout << "Error : can't load jeu2.png" << std::endl;
	}
	jeu2Sprite.setTexture(jeu2Texture);
	jeu2Sprite.setPosition(570, 100);

	if (!jeu3Texture.loadFromFile("LTF/imgs/jeu3.png"))
	{
		std::cout << "Error : can't load jeu3.png" << std::endl;
	}
	jeu3Sprite.setTexture(jeu3Texture);
	jeu3Sprite.setPosition(805, 100);

	if (!jeu4Texture.loadFromFile("LTF/imgs/jeu4.png"))
	{
		std::cout << "Error : can't load jeu4.png" << std::endl;
	}
	jeu4Sprite.setTexture(jeu4Texture);
	jeu4Sprite.setPosition(1040, 100);

	if (!autreButtonHovered1Texture.loadFromFile("LTF/imgs/boutons/autreButtonHovered1.png"))
	{
		std::cout << "Error : can't load autreButtonHovered1.png" << std::endl;
	}
	if (!autreButtonUnhovered1Texture.loadFromFile("LTF/imgs/boutons/autreButtonUnhovered1.png"))
	{
		std::cout << "Error : can't load autreButtonUnhovered1.png" << std::endl;
	}
	moreButton1_1Sprite.setTexture(autreButtonUnhovered1Texture);
	moreButton1_1Sprite.setPosition(335, 597);

	if (!diversButtonHovered1Texture.loadFromFile("LTF/imgs/boutons/diversButtonHovered1.png"))
	{
		std::cout << "Error : can't load diversButtonHovered1.png" << std::endl;
	}
	if (!diversButtonUnhovered1Texture.loadFromFile("LTF/imgs/boutons/diversButtonUnhovered1.png"))
	{
		std::cout << "Error : can't load diversButtonUnhovered1.png" << std::endl;
	}
	moreButton1_2Sprite.setTexture(diversButtonUnhovered1Texture);
	moreButton1_2Sprite.setPosition(335, 628);

	if (!autreButtonHovered2Texture.loadFromFile("LTF/imgs/boutons/autreButtonHovered2.png"))
	{
		std::cout << "Error : can't load autreButtonHovered2.png" << std::endl;
	}
	if (!autreButtonUnhovered2Texture.loadFromFile("LTF/imgs/boutons/autreButtonUnhovered2.png"))
	{
		std::cout << "Error : can't load autreButtonUnhovered2.png" << std::endl;
	}
	moreButton2_1Sprite.setTexture(autreButtonUnhovered2Texture);
	moreButton2_1Sprite.setPosition(570, 597);

	if (!diversButtonHovered2Texture.loadFromFile("LTF/imgs/boutons/diversButtonHovered2.png"))
	{
		std::cout << "Error : can't load diversButtonHovered2.png" << std::endl;
	}
	if (!diversButtonUnhovered2Texture.loadFromFile("LTF/imgs/boutons/diversButtonUnhovered2.png"))
	{
		std::cout << "Error : can't load diversButtonUnhovered2.png" << std::endl;
	}
	moreButton2_2Sprite.setTexture(diversButtonUnhovered2Texture);
	moreButton2_2Sprite.setPosition(570, 628);

	if (!autreButtonHovered3Texture.loadFromFile("LTF/imgs/boutons/autreButtonHovered3.png"))
	{
		std::cout << "Error : can't load autreButtonHovered3.png" << std::endl;
	}
	if (!autreButtonUnhovered3Texture.loadFromFile("LTF/imgs/boutons/autreButtonUnhovered3.png"))
	{
		std::cout << "Error : can't load autreButtonUnhovered3.png" << std::endl;
	}
	moreButton3_1Sprite.setTexture(autreButtonUnhovered3Texture);
	moreButton3_1Sprite.setPosition(805, 597);

	if (!diversButtonHovered3Texture.loadFromFile("LTF/imgs/boutons/diversButtonHovered3.png"))
	{
		std::cout << "Error : can't load diversButtonHovered3.png" << std::endl;
	}
	if (!diversButtonUnhovered3Texture.loadFromFile("LTF/imgs/boutons/diversButtonUnhovered3.png"))
	{
		std::cout << "Error : can't load diversButtonUnhovered3.png" << std::endl;
	}
	moreButton3_2Sprite.setTexture(diversButtonUnhovered3Texture);
	moreButton3_2Sprite.setPosition(805, 628);

	if (!autreButtonHovered4Texture.loadFromFile("LTF/imgs/boutons/autreButtonHovered4.png"))
	{
		std::cout << "Error : can't load autreButtonHovered4.png" << std::endl;
	}
	if (!autreButtonUnhovered4Texture.loadFromFile("LTF/imgs/boutons/autreButtonUnhovered4.png"))
	{
		std::cout << "Error : can't load autreButtonUnhovered3.png" << std::endl;
	}
	moreButton4_1Sprite.setTexture(autreButtonUnhovered4Texture);
	moreButton4_1Sprite.setPosition(1040, 597);

	if (!diversButtonHovered4Texture.loadFromFile("LTF/imgs/boutons/diversButtonHovered4.png"))
	{
		std::cout << "Error : can't load diversButtonHovered3.png" << std::endl;
	}
	if (!diversButtonUnhovered4Texture.loadFromFile("LTF/imgs/boutons/diversButtonUnhovered4.png"))
	{
		std::cout << "Error : can't load diversButtonUnhovered4.png" << std::endl;
	}
	moreButton4_2Sprite.setTexture(diversButtonUnhovered4Texture);
	moreButton4_2Sprite.setPosition(1040, 628);




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
					bool manuel1Hover = false;
					bool manuel2Hover = false;
					bool manuel3Hover = false;
					bool manuel4Hover = false;
					bool moreButton1_1Hover = false;
					bool moreButton1_2Hover = false;
					bool moreButton2_1Hover = false;
					bool moreButton2_2Hover = false;
					bool moreButton3_1Hover = false;
					bool moreButton3_2Hover = false;
					bool moreButton4_1Hover = false;
					bool moreButton4_2Hover = false;
					bool jeu1SpriteHover = false;
					bool jeu2SpriteHover = false;
					bool jeu3SpriteHover = false;
					bool jeu4SpriteHover = false;

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


					if (bundleHover || forumsHover || discordHover || abwfrHover || personalityHover || companyHover ||  magazineHover || biiperHover || exitHover || soundHover || lancerJeu1Hover || lancerJeu2Hover || lancerJeu3Hover || lancerJeu4Hover || manuel1Hover || manuel2Hover || manuel3Hover || manuel4Hover || moreButton1_1Hover || moreButton1_2Hover || moreButton2_1Hover || moreButton2_2Hover || moreButton3_1Hover || moreButton3_2Hover || moreButton4_1Hover || moreButton4_2Hover || jeu1SpriteHover || jeu2SpriteHover ||  jeu3SpriteHover || jeu4SpriteHover)
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
		window.draw(jeu1Sprite);
		window.draw(jeu2Sprite);
		window.draw(jeu3Sprite);
		window.draw(jeu4Sprite);
		window.draw(manuel1Sprite);
		window.draw(manuel2Sprite);
		window.draw(manuel3Sprite);
		window.draw(manuel4Sprite);
		window.draw(exitSprite);
		window.draw(soundSprite);
		window.draw(moreButton1_1Sprite);
		window.draw(moreButton1_2Sprite);
		window.draw(moreButton2_1Sprite);
		window.draw(moreButton2_2Sprite);
		window.draw(moreButton3_1Sprite);
		window.draw(moreButton3_2Sprite);
		window.draw(moreButton4_1Sprite);
		window.draw(moreButton4_2Sprite);
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
		window.draw(manuelText1);
		window.draw(manuelText2);
		window.draw(manuelText3);
		window.draw(manuelText4);
		window.draw(gameNameText1);
		window.draw(gameNameText2);
		window.draw(gameNameText3);
		window.draw(gameNameText4);
		window.draw(developerText1);
		window.draw(developerText2);
		window.draw(developerText3);
		window.draw(developerText4);
		window.draw(more1Text1);
		window.draw(more1Text2);
		window.draw(more1Text3);
		window.draw(more1Text4);
		window.draw(more2Text1);
		window.draw(more2Text2);
		window.draw(more2Text3);
		window.draw(more2Text4);
		window.display();
	}
	return 0;
}