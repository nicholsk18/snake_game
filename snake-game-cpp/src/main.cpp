#include <iostream>
#include <SFML/Graphics.hpp>

#include "StartScreen.h"
#include "Buttons.h"

sf::RectangleShape button(sf::Color, std::string);

sf::Font load_font()
{
    sf::Font font;
    if (!font.loadFromFile("../Arial.ttf"))
    {
        std::cout << "Font Did Not Load\n";
    }

    return font;
}

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

    sf::Font font = load_font();

    // need to create own class/func
    sf::Text text;
    text.setFont(font);
    text.setString("Wanna play Snake game");
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::Black);
    text.setPosition(WINDOW_WIDTH / 2.7, WINDOW_HEIGHT / 3);

    snake::Buttons start_button(sf::Color::Blue, "Start", 350, 500);
    start_button.setFont(font);
    snake::Buttons cancel_button(sf::Color::Red, "Cancel", 600, 500);
    cancel_button.setFont(font);

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
        window.clear();

        // draw
        window.draw(innerWindow);
        window.draw(text);

        // draw start button
        window.draw(start_button.getButton());
        window.draw(start_button.getText());
        window.draw(cancel_button.getButton());
        window.draw(cancel_button.getText());

        window.display();
    }

    return 0;
}

// Create a button
sf::RectangleShape button(sf::Color color, std::string user_text)
{
    sf::Font font = load_font();

    sf::Text text;
    text.setFont(font);
    text.setString("Wanna play Snake game");
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);
    text.setPosition(500, 0);

    // Buttons
    sf::RectangleShape button(sf::Vector2f(120.f, 50.f));
    button.setSize(sf::Vector2f(150.f, 50.f));
    button.setFillColor(color);

    return button;
}