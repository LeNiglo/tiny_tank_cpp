#include "GameScreen.h"

GameScreen::GameScreen()
{
    this->goToHome = false;
}

GameScreen::~GameScreen()
{

}

void    GameScreen::render(sf::RenderWindow *window)
{
    sf::CircleShape ball;
    ball.setRadius(30 - 3);
    ball.setOutlineThickness(3);
    ball.setOutlineColor(sf::Color::Black);
    ball.setFillColor(sf::Color::White);
    ball.setOrigin(30 / 2, 30 / 2);
    ball.setPosition(WIN_WIDTH / 2, WIN_HEIGHT / 2);

    window->draw(ball);
}

void    GameScreen::update(EScreen *currentScreen)
{
    if (this->goToHome == true) {
        this->goToHome = false;
        DebugController::getInstance()->info("Changing to HOME Screen");
        *currentScreen = EScreen::HOME;
        return;
    }
}

bool    GameScreen::handleEvent(const sf::Event &event)
{
     if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
         return this->goToHome = true;
     }

     return true;
}
