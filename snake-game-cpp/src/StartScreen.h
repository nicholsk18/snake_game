//
// Created by knichols on 7/27/20.
//

#ifndef SNAKE_GAME_STARTSCREEN_H
#define SNAKE_GAME_STARTSCREEN_H

#include <SFML/Graphics.hpp>

namespace snake {
    class StartScreen {
    private:
        const float MENU_WINDOW_WIDTH = 1000.f;
        const float MENU_WINDOW_HEIGHT = 700.f;

        const int WINDOW_WIDTH;
        const int WINDOW_HEIGHT;

    public:
        StartScreen(int windowWidth, int windowHeight);
        sf::RectangleShape display();
        float getMenuWidth();
        int getMenuHeight();
    };
}


#endif //SNAKE_GAME_STARTSCREEN_H