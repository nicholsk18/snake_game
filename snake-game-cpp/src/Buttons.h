//
// Created by knichols on 8/1/20.
//

#ifndef SNAKE_GAME_BUTTONS_H
#define SNAKE_GAME_BUTTONS_H

#include <SFML/Graphics.hpp>

namespace snake {
    class Buttons {
    private:
        sf::Font font;
        std::string user_text;
        sf::Color color;
        sf::RectangleShape button;
        sf::Text text;

    private:
        int button_position_x;
        int button_position_y;

    public:
        Buttons(sf::Color, std::string, int, int);
        void setPosition(int, int);
        sf::RectangleShape getButton();

        void setFont(sf::Font);
        sf::Text getText();
    };
}

#endif //SNAKE_GAME_BUTTONS_H
