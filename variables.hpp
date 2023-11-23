#ifndef VARIABLES_HPP
#define VARIABLES_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

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
sf::Texture bundleTexture;

sf::Sprite backgroundSpriteNavBar;
sf::Sprite exitBackgroundSprite;
sf::Sprite soundBackgroundSprite;
sf::Sprite exitSprite;
sf::Sprite soundSprite;
sf::Sprite bundleSprite;

sf::SoundBuffer hoverSoundBuffer;

sf::Sound hoverSound;

sf::Music music;

sf::Font RobotoRegular;
sf::Font RobotoCondensed;

sf::Text versionText;

bool alreadyHovered = false;
bool exitHover = false;
bool soundHover = false;
bool isMusicMuted = false;

#endif