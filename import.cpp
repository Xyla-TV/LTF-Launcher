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

	if (!backgroundTextureNavBar.loadFromFile("LTF/imgs/bundle/background1.png"))
	{
		std::cout << "Error : can't load background1.png" << std::endl;
	}

	return 0;
}

int importProperty()
{
	configData config;

	backgroundSpriteNavBar.setTexture(backgroundTextureNavBar);
	backgroundSpriteNavBar.setPosition(0, 0);

	versionText.setFont(RobotoCondensed);
	versionText.setCharacterSize(13);
	versionText.setPosition(150, 685);
	
	if (readConfigFile("config.cfg", config)) {
		versionText.setString(config.launcher_version);
	}

	return 0;
}