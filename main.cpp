#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <Windows.h>
#include <Discord/discord.h>

#include "variables.hpp"
#include "config.hpp"

#include "import.cpp"

int main()
{
    import();
    importProperty();
    mainConfig();

    window.create(sf::VideoMode(1280, 720), "Abandonware France Launcher", sf::Style::Default);
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
    window.setFramerateLimit(30);

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

                bool exitHover = false;
                bool soundHover = false;

                if (exitBackgroundSprite.getGlobalBounds().contains(mousePosF))
                {
                    exitHover = true;
                }
                else if (soundBackgroundSprite.getGlobalBounds().contains(mousePosF))
                {
                    soundHover = true;
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

                if (exitHover || soundHover)
                {
                    if (!alreadyHovered)
                    {
                        window.setMouseCursor(handCursor);
                        hoverSound.play();
                        alreadyHovered = true;
                    }
                }
                else
                {
                    window.setMouseCursor(arrowCursor);
                    alreadyHovered = false;
                }
            }
            }
        }

        window.clear();

        window.draw(backgroundSpriteNavBar);
        window.draw(bundleSprite);
        window.draw(exitBackgroundSprite);
        window.draw(soundBackgroundSprite);
        window.draw(exitSprite);
        window.draw(soundSprite);
        window.draw(versionText);

        window.display();
    }

    return 0;
}