#include <SFML/Graphics.hpp>
#include <iostream>

#include "variables.hpp"

int import()
{
	if (!icon.loadFromFile("LTF/imgs/bundle/icon.png"))
	{
		std::cout << "Error : can't load icon.png" << std::endl;
	}

	if (!RobotoRegular.loadFromFile("LTF/fonts/Roboto-Regular.ttf"))
	{
		std::cout << "Error : can't load Roboto-Regular.ttf" << std::endl;
	}

	if (!RobotoCondensed.loadFromFile("LTF/fonts/Roboto-Condensed.ttf"))
	{
		std::cout << "Error : can't load Roboto-Condensed.ttf" << std::endl;
	}

	if (!backgroundTextureNavBar.loadFromFile("LTF/imgs/bundle/backgroundNavBar.png"))
	{
		std::cout << "Error : can't load backgroundNavBar.png" << std::endl;
	}

	if (!smallButtonHoveredTexture.loadFromFile("LTF/imgs/bundle/smallButtonHovered.png"))
	{
		std::cout << "Error : can't load smallButtonHovered.png" << std::endl;
	}

	if (!smallButtonUnhoveredTexture.loadFromFile("LTF/imgs/bundle/smallButtonUnhovered.png"))
	{
		std::cout << "Error : can't load smallButtonUnhovered.png" << std::endl;
	}

	if (!exitTexture.loadFromFile("LTF/imgs/bundle/exit.png"))
	{
		std::cout << "Error : can't load exit.png" << std::endl;
	}

	if (!soundoffTexture.loadFromFile("LTF/imgs/bundle/soundoff.png"))
	{
		std::cout << "Error : can't load soundoff.png" << std::endl;
	}

	if (!soundonTexture.loadFromFile("LTF/imgs/bundle/soundon.png"))
	{
		std::cout << "Error : can't load soundon.png" << std::endl;
	}

	return 0;
}

int importProperty()
{
	configData config;

	backgroundSpriteNavBar.setTexture(backgroundTextureNavBar);
	backgroundSpriteNavBar.setPosition(0, 0);

	exitBackgroundSprite.setTexture(smallButtonUnhoveredTexture);
	exitBackgroundSprite.setPosition(0, 660);

	soundBackgroundSprite.setTexture(smallButtonUnhoveredTexture);
	soundBackgroundSprite.setPosition(60, 660);

	exitSprite.setTexture(exitTexture);
	exitSprite.setPosition(20, 680);

	soundSprite.setTexture(soundonTexture);
	soundSprite.setPosition(80, 680);

	versionText.setFont(RobotoCondensed);
	versionText.setCharacterSize(13);
	versionText.setPosition(150, 685);

	arrowCursor.loadFromSystem(sf::Cursor::Arrow);
	handCursor.loadFromSystem(sf::Cursor::Hand);
	
	if (readConfigFile("config.cfg", config)) {
		versionText.setString(config.launcher_version);
	}

	return 0;
}