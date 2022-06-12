//
// Created by knichols on 7/27/20.
//

//struct direction {
//    float still = 0.f;
//    float left = -1.f;
//    float right = 1.f;
//    float up = -1.f;
//    float down = 1.f;
//} snake_controls;
//
//void turn_snake(sf::Event event, int *pMoveX, int *pMoveY);

// create a square
//sf::RectangleShape rectangle(sf::Vector2f(10.f, 10.f));
//rectangle.setFillColor(sf::Color::Green);
//rectangle.setPosition(WINDOW_WIDTH / 2.f, WINDOW_HEIGHT / 2.f);
//
//// snake movement
//int moveX = 0.f;
//int moveY = -1.f;
//
//int *pMoveX = &moveX;
//int *pMoveY = &moveY;

// move snake
//rectangle.move(*pMoveX, *pMoveY);
//
//// game logic
//
//turn_snake(event, pMoveX, pMoveY);
//
//window.clear(sf::Color::Black);
//
//// draw
//window.draw(rectangle);

// turn the snake in different directions
//void turn_snake(sf::Event event, int *pMoveX, int *pMoveY)
//{
//    // Control the movement of the snake
//    switch (event.key.code) {
//        case sf::Keyboard::Left:
//            *pMoveX = snake_controls.left;
//            *pMoveY = snake_controls.still;
//            break;
//        case sf::Keyboard::Right:
//            *pMoveX = snake_controls.right;
//            *pMoveY = snake_controls.still;
//            break;
//        case sf::Keyboard::Up:
//            *pMoveX = snake_controls.still;
//            *pMoveY = snake_controls.up;
//            break;
//        case sf::Keyboard::Down:
//            *pMoveX = snake_controls.still;
//            *pMoveY = snake_controls.down;
//            break;
//    }
//}

