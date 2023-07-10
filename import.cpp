#include <SFML/Graphics.hpp>
#include <iostream>

#include "variables.hpp"

int import()
{
	if (!icon.loadFromFile("LTF/imgs/bundle/icon.png"))
	{
		std::cout << "Error : can't load icon.png" << std::endl;
	}

	if (!backgroundTextureNavBar.loadFromFile("LTF/imgs/bundle/background1.png"))
	{
		std::cout << "Error : can't load background1.png" << std::endl;
	}

	return 0;
}

int importProperty()
{
	backgroundSpriteNavBar.setTexture(backgroundTextureNavBar);
	backgroundSpriteNavBar.setPosition(0, 0);

	return 0;
}