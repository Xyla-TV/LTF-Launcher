#ifndef VARIABLES_HPP
#define VARIABLES_HPP

#include <SFML/Graphics.hpp>

sf::RenderWindow window;

auto icon = sf::Image{};

sf::Cursor arrowCursor;
sf::Cursor handCursor;

sf::Texture backgroundTextureNavBar;
sf::Texture smallButtonHoveredTexture;
sf::Texture smallButtonUnhoveredTexture;
sf::Texture exitTexture;
sf::Texture soundonTexture;
sf::Texture soundoffTexture;

sf::Sprite backgroundSpriteNavBar;
sf::Sprite exitBackgroundSprite;
sf::Sprite soundBackgroundSprite;
sf::Sprite exitSprite;
sf::Sprite soundSprite;

sf::Font RobotoRegular;
sf::Font RobotoCondensed;

sf::Text versionText;

#endif