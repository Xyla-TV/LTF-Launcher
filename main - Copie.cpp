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
	sf::Texture mediumButtonHoveredTexture;
	sf::Texture mediumButtonUnhoveredTexture;
	sf::Texture autreButtonHovered1Texture;
	sf::Texture diversButtonHovered1Texture;
	sf::Texture autreButtonHovered2Texture;
	sf::Texture diversButtonHovered2Texture;
	sf::Texture autreButtonHovered3Texture;
	sf::Texture diversButtonHovered3Texture;
	sf::Texture autreButtonUnhovered1Texture;
	sf::Texture diversButtonUnhovered1Texture;
	sf::Texture autreButtonUnhovered2Texture;
	sf::Texture diversButtonUnhovered2Texture;
	sf::Texture autreButtonUnhovered3Texture;
	sf::Texture diversButtonUnhovered3Texture;
	sf::Sprite moreButton1_1Sprite;
	sf::Sprite moreButton1_2Sprite;
	sf::Sprite moreButton2_1Sprite;
	sf::Sprite moreButton2_2Sprite;
	sf::Sprite moreButton3_1Sprite;
	sf::Sprite moreButton3_2Sprite;
	sf::Sprite exitBackgroundSprite;
	sf::Sprite soundBackgroundSprite;
	sf::Texture exitTexture;
	sf::Sprite exitSprite;
	sf::Texture soundonTexture;
	sf::Texture soundoffTexture;
	sf::Sprite soundSprite;
	sf::Texture jeu1Texture;
	sf::Sprite jeu1Sprite;
	sf::Texture jeu2Texture;
	sf::Sprite jeu2Sprite;
	sf::Texture jeu3Texture;
	sf::Sprite jeu3Sprite;
	sf::Sprite lancerJeu1Sprite;
	sf::Sprite lancerJeu2Sprite;
	sf::Sprite lancerJeu3Sprite;
	sf::Sprite manuel1Sprite;
	sf::Sprite manuel2Sprite;
	sf::Sprite manuel3Sprite;
	std::ifstream versionFile;
	std::ifstream gameNameFile;
	std::ifstream developerFile;
	std::ifstream more1File;
	std::ifstream more2File;
	std::ifstream manuelsFile;
	std::ifstream jeuxFile;
	sf::Text forumsText;
	sf::Text discordText;
	sf::Text abwfrText;
	sf::Text personalityText;
	sf::Text companyText;
	sf::Text magazineText;
	sf::Text biiperText;
	sf::Text jeu1Text;
	sf::Text jeu2Text;
	sf::Text jeu3Text;
	sf::Text manuel1Text;
	sf::Text manuel2Text;
	sf::Text manuel3Text;
	sf::Text versionText;
	sf::Text gameNameText;
	sf::Text developerText;
	sf::Text more1Text;
	sf::Text more2Text;
	std::string versionLine;
	std::string gameNameLine;
	std::string developerLine;
	std::string more1Line;
	std::string more2Line;
	std::string manuelsLine;
	std::string jeuxLine;
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
	gameNameText.setFont(RobotoCondensed);
	gameNameText.setCharacterSize(20);
	gameNameText.setPosition(380, 470);
	developerText.setFont(RobotoCondensed);
	developerText.setCharacterSize(16);
	developerText.setPosition(380, 504);
	developerText.setFillColor(sf::Color(23, 146, 191));
	more1Text.setFont(RobotoCondensed);
	more1Text.setCharacterSize(16);
	more1Text.setPosition(380, 603);
	more2Text.setFont(RobotoCondensed);
	more2Text.setCharacterSize(16);
	more2Text.setPosition(380, 634);
	jeu1Text.setFont(RobotoCondensed);
	jeu1Text.setCharacterSize(16);
	jeu1Text.setPosition(380, 541);
	//jeu1Text.setString("Le jeu");
	//jeu2Text.setFont(RobotoCondensed);
	//jeu2Text.setCharacterSize(16);
	//jeu2Text.setPosition(670, 541);
	//jeu2Text.setString("Le jeu");
	//jeu3Text.setFont(RobotoCondensed);
	//jeu3Text.setCharacterSize(16);
	//jeu3Text.setPosition(960, 541);
	//jeu3Text.setString("Le jeu");
	manuel1Text.setFont(RobotoCondensed);
	manuel1Text.setCharacterSize(16);
	manuel1Text.setPosition(380, 572);
	//manuel1Text.setString("Le manuel");
	//manuel2Text.setFont(RobotoCondensed);
	//manuel2Text.setCharacterSize(16);
	//manuel2Text.setPosition(670, 572);
	//manuel2Text.setString("Le manuel");
	//manuel3Text.setFont(RobotoCondensed);
	//manuel3Text.setCharacterSize(16);
	//manuel3Text.setPosition(960, 572);
	//manuel3Text.setString("Le manuel");

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

	if (!mediumButtonHoveredTexture.loadFromFile("LTF/imgs/mediumButtonHovered.png"))
	{
		std::cout << "Error : can't load mediumButtonHovered.png" << std::endl;
	}

	if (!mediumButtonUnhoveredTexture.loadFromFile("LTF/imgs/mediumButtonUnhovered.png"))
	{
		std::cout << "Error : can't load mediumButtonUnhovered.png" << std::endl;
	}
	lancerJeu1Sprite.setTexture(mediumButtonUnhoveredTexture);
	lancerJeu1Sprite.setPosition(380, 535);
	lancerJeu2Sprite.setTexture(mediumButtonUnhoveredTexture);
	lancerJeu2Sprite.setPosition(670, 535);
	lancerJeu3Sprite.setTexture(mediumButtonUnhoveredTexture);
	lancerJeu3Sprite.setPosition(960, 535);
	manuel1Sprite.setTexture(mediumButtonUnhoveredTexture);
	manuel1Sprite.setPosition(380, 566);
	manuel2Sprite.setTexture(mediumButtonUnhoveredTexture);
	manuel2Sprite.setPosition(670, 566);
	manuel3Sprite.setTexture(mediumButtonUnhoveredTexture);
	manuel3Sprite.setPosition(960, 566);

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
	jeu1Sprite.setPosition(380, 100);

	if (!jeu2Texture.loadFromFile("LTF/imgs/jeu2.png"))
	{
		std::cout << "Error : can't load jeu2.png" << std::endl;
	}
	jeu2Sprite.setTexture(jeu2Texture);
	jeu2Sprite.setPosition(670, 100);

	if (!jeu3Texture.loadFromFile("LTF/imgs/jeu3.png"))
	{
		std::cout << "Error : can't load jeu3.png" << std::endl;
	}
	jeu3Sprite.setTexture(jeu3Texture);
	jeu3Sprite.setPosition(960, 100);

	if (!autreButtonHovered1Texture.loadFromFile("LTF/imgs/autreButtonHovered1.png"))
	{
		std::cout << "Error : can't load autreButtonHovered1.png" << std::endl;
	}
	if (!autreButtonUnhovered1Texture.loadFromFile("LTF/imgs/autreButtonUnhovered1.png"))
	{
		std::cout << "Error : can't load autreButtonUnhovered1.png" << std::endl;
	}
	moreButton1_1Sprite.setTexture(autreButtonUnhovered1Texture);
	moreButton1_1Sprite.setPosition(380, 597);

	if (!diversButtonHovered1Texture.loadFromFile("LTF/imgs/diversButtonHovered1.png"))
	{
		std::cout << "Error : can't load diversButtonHovered1.png" << std::endl;
	}
	if (!diversButtonUnhovered1Texture.loadFromFile("LTF/imgs/diversButtonUnhovered1.png"))
	{
		std::cout << "Error : can't load diversButtonUnhovered1.png" << std::endl;
	}
	moreButton1_2Sprite.setTexture(diversButtonUnhovered1Texture);
	moreButton1_2Sprite.setPosition(380, 628);

	if (!autreButtonHovered2Texture.loadFromFile("LTF/imgs/autreButtonHovered2.png"))
	{
		std::cout << "Error : can't load autreButtonHovered2.png" << std::endl;
	}
	if (!autreButtonUnhovered2Texture.loadFromFile("LTF/imgs/autreButtonUnhovered2.png"))
	{
		std::cout << "Error : can't load autreButtonUnhovered2.png" << std::endl;
	}
	moreButton2_1Sprite.setTexture(autreButtonUnhovered2Texture);
	moreButton2_1Sprite.setPosition(670, 597);

	if (!diversButtonHovered2Texture.loadFromFile("LTF/imgs/diversButtonHovered2.png"))
	{
		std::cout << "Error : can't load diversButtonHovered2.png" << std::endl;
	}
	if (!diversButtonUnhovered2Texture.loadFromFile("LTF/imgs/diversButtonUnhovered2.png"))
	{
		std::cout << "Error : can't load diversButtonUnhovered2.png" << std::endl;
	}
	moreButton2_2Sprite.setTexture(diversButtonUnhovered2Texture);
	moreButton2_2Sprite.setPosition(670, 628);

	if (!autreButtonHovered3Texture.loadFromFile("LTF/imgs/autreButtonHovered3.png"))
	{
		std::cout << "Error : can't load autreButtonHovered3.png" << std::endl;
	}
	if (!autreButtonUnhovered3Texture.loadFromFile("LTF/imgs/autreButtonUnhovered3.png"))
	{
		std::cout << "Error : can't load autreButtonUnhovered3.png" << std::endl;
	}
	moreButton3_1Sprite.setTexture(autreButtonUnhovered3Texture);
	moreButton3_1Sprite.setPosition(960, 597);

	if (!diversButtonHovered3Texture.loadFromFile("LTF/imgs/diversButtonHovered3.png"))
	{
		std::cout << "Error : can't load diversButtonHovered3.png" << std::endl;
	}
	if (!diversButtonUnhovered3Texture.loadFromFile("LTF/imgs/diversButtonUnhovered3.png"))
	{
		std::cout << "Error : can't load diversButtonUnhovered3.png" << std::endl;
	}
	moreButton3_2Sprite.setTexture(diversButtonUnhovered3Texture);
	moreButton3_2Sprite.setPosition(960, 628);

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

	jeuxFile.open("LTF/text/6-jeux.txt");
	if (jeuxFile.is_open())
	{
		while (std::getline(jeuxFile, jeuxLine))
		{
			jeu1Text.setString(jeuxLine);
		}
	}

	manuelsFile.open("LTF/text/5-manuels.txt");
	if (manuelsFile.is_open())
	{
		while (std::getline(manuelsFile, manuelsLine))
		{
			manuel1Text.setString(manuelsLine);
		}
	}

	gameNameFile.open("LTF/text/1-nomdujeu.txt");
	if (gameNameFile.is_open())
	{
		while (std::getline(gameNameFile, gameNameLine))
		{
			gameNameText.setString(gameNameLine);
		}
	}

	developerFile.open("LTF/text/2-développeurs.txt");
	if (developerFile.is_open())
	{
		while (std::getline(developerFile, developerLine))
		{
			developerText.setString(developerLine);
		}
	}

	more1File.open("LTF/text/3-autre.txt");
	if (more1File.is_open())
	{
		while (std::getline(more1File, more1Line))
		{
			more1Text.setString(more1Line);
		}
	}

	more2File.open("LTF/text/4-divers.txt");
	if (more2File.is_open())
	{
		while (std::getline(more2File, more2Line))
		{
			more2Text.setString(more2Line);
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
					bool manuel1Hover = false;
					bool manuel2Hover = false;
					bool manuel3Hover = false;
					bool moreButton1_1Hover = false;
					bool moreButton1_2Hover = false;
					bool moreButton2_1Hover = false;
					bool moreButton2_2Hover = false;
					bool moreButton3_1Hover = false;
					bool moreButton3_2Hover = false;
					bool jeu1SpriteHover = false;
					bool jeu2SpriteHover = false;
					bool jeu3SpriteHover = false;

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
						lancerJeu1Sprite.setTexture(mediumButtonHoveredTexture);
					}
					else
					{
						lancerJeu1Sprite.setTexture(mediumButtonUnhoveredTexture);
					}

					if (lancerJeu2Hover)
					{
						lancerJeu2Sprite.setTexture(mediumButtonHoveredTexture);
					}
					else
					{
						lancerJeu2Sprite.setTexture(mediumButtonUnhoveredTexture);
					}

					if (lancerJeu3Hover)
					{
						lancerJeu3Sprite.setTexture(mediumButtonHoveredTexture);
					}
					else
					{
						lancerJeu3Sprite.setTexture(mediumButtonUnhoveredTexture);
					}

					if (manuel1Hover)
					{
						manuel1Sprite.setTexture(mediumButtonHoveredTexture);
					}
					else
					{
						manuel1Sprite.setTexture(mediumButtonUnhoveredTexture);
					}

					if (manuel2Hover)
					{
						manuel2Sprite.setTexture(mediumButtonHoveredTexture);
					}
					else
					{
						manuel2Sprite.setTexture(mediumButtonUnhoveredTexture);
					}

					if (manuel3Hover)
					{
						manuel3Sprite.setTexture(mediumButtonHoveredTexture);
					}
					else
					{
						manuel3Sprite.setTexture(mediumButtonUnhoveredTexture);
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


					if (bundleHover || forumsHover || discordHover || abwfrHover || personalityHover || companyHover ||  magazineHover || biiperHover || exitHover || soundHover || lancerJeu1Hover || lancerJeu2Hover || lancerJeu3Hover || manuel1Hover || manuel2Hover || manuel3Hover || moreButton1_1Hover || moreButton1_2Hover || moreButton2_1Hover || moreButton2_2Hover || moreButton3_1Hover || moreButton3_2Hover || jeu1SpriteHover || jeu2SpriteHover ||  jeu3SpriteHover)
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
						system("start https://www.abandonware-france.org/");
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
		window.draw(jeu1Sprite);
		window.draw(jeu2Sprite);
		window.draw(jeu3Sprite);
		window.draw(manuel1Sprite);
		window.draw(manuel2Sprite);
		window.draw(manuel3Sprite);
		window.draw(exitSprite);
		window.draw(soundSprite);
		window.draw(moreButton1_1Sprite);
		window.draw(moreButton1_2Sprite);
		window.draw(moreButton2_1Sprite);
		window.draw(moreButton2_2Sprite);
		window.draw(moreButton3_1Sprite);
		window.draw(moreButton3_2Sprite);
		window.draw(forumsText);
		window.draw(discordText);
		window.draw(abwfrText);
		window.draw(personalityText);
		window.draw(companyText);
		window.draw(magazineText);
		window.draw(biiperText);
		window.draw(versionText);
		window.draw(jeu1Text);
		window.draw(jeu2Text);
		window.draw(jeu3Text);
		window.draw(manuel1Text);
		//window.draw(manuel2Text);
		//window.draw(manuel3Text);
		window.draw(gameNameText);
		window.draw(developerText);
		window.draw(more1Text);
		window.draw(more2Text);
		window.display();
	}
	return 0;
}