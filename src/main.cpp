#include <iostream>
#include <SFML/Graphics.hpp>

#include "StartScreen.h"

int main()
{
    // main window size
    const int WINDOW_WIDTH = 1150;
    const int WINDOW_HEIGHT = 900;

    // Create a window with title bar and close button
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Snake Game", sf::Style::Titlebar | sf::Style::Close);
    // force vsync
    // window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(60);


    // init start screen
    snake::StartScreen startScreen(WINDOW_WIDTH, WINDOW_HEIGHT);
    sf::RectangleShape innerWindow = startScreen.display();

    // main loop
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            // close window
            if (event.type == sf::Event::Closed)
                window.close();
            else if (event.type == sf::Event::GainedFocus)
                // pause when lose focus
                // add later
                std::cout << "Gained focus" << std::endl;
            else if (event.type == sf::Event::LostFocus)
                // resume when gain focus
                // add later
                std::cout << "Lost focus" << std::endl;
        }

        // draw
        window.draw(innerWindow);

        window.display();
    }

    return 0;
}
