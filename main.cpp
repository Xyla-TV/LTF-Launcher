#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <Windows.h>

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
            }
        }

        window.clear();
        window.draw(backgroundSpriteNavBar);
        window.draw(versionText);
        window.display();
    }

    return 0;
}