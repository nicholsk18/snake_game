//
// Created by knichols on 7/27/20.
//

#include "StartScreen.h"

namespace snake {
    StartScreen::StartScreen(int windowWidth, int windowHeight): WINDOW_WIDTH{windowWidth}, WINDOW_HEIGHT{windowHeight}{

    }

    sf::RectangleShape StartScreen::display() {
        // game menu
        sf::RectangleShape innerWindow(sf::Vector2f(this->getMenuWidth(), this->getMenuHeight()));
        innerWindow.setFillColor(sf::Color::White);
        innerWindow.setOrigin(this->getMenuWidth() / 2.f, this->getMenuHeight() / 2.f);
        innerWindow.setPosition(WINDOW_WIDTH / 2.f, WINDOW_HEIGHT / 2.f);
        return innerWindow;
    }

    float StartScreen::getMenuWidth() {
        return this->MENU_WINDOW_WIDTH;
    }

    int StartScreen::getMenuHeight() {
        return this->MENU_WINDOW_HEIGHT;
    }
}