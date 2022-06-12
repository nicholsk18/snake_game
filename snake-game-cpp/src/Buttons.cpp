//
// Created by knichols on 8/1/20.
//

#include "Buttons.h"

namespace snake {


    Buttons::Buttons(sf::Color color, std::string user_text, int x, int y)
        : color{color}, user_text{user_text}, button_position_x{x}, button_position_y{y}
    {
        const int BUTTON_WIDTH = 150.f;
        const int BUTTON_HEIGHT = 50.f;

        button.setSize(sf::Vector2f(BUTTON_WIDTH, BUTTON_HEIGHT));
        button.setPosition(button_position_x, button_position_y);
        button.setFillColor(color);

        text.setFont(font);
        text.setString(user_text);
        text.setCharacterSize(24);
        text.setFillColor(sf::Color::White);
        text.getGlobalBounds();
        text.setPosition(button_position_x + 45, button_position_y + 10);
    }

    sf::RectangleShape Buttons::getButton()
    {
        return button;
    }

    sf::Text Buttons::getText() {
        return text;
    }

    void Buttons::setFont(sf::Font font)
    {
        this->font = font;
    }
}