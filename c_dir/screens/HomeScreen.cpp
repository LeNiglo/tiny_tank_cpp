#include "HomeScreen.h"

HomeScreen::HomeScreen()
{
    this->goToGame = false;
}

HomeScreen::~HomeScreen()
{

}

void    HomeScreen::render(sf::RenderWindow *window)
{

    sf::Vector2f rectSize(25, 100);
    sf::RectangleShape rect;
    rect.setSize(rectSize - sf::Vector2f(3, 3));
    rect.setOutlineThickness(3);
    rect.setOutlineColor(sf::Color::Black);
    rect.setFillColor(sf::Color(100, 100, 200));
    rect.setOrigin(rectSize / 2.f);
    rect.setPosition(WIN_WIDTH / 2, WIN_HEIGHT / 2);

    window->draw(rect);
}

void    HomeScreen::update(EScreen *currentScreen)
{
    if (this->goToGame == true) {
        this->goToGame = false;
        DebugController::getInstance()->info("Changing to GAME Screen");
        *currentScreen = EScreen::GAME;
        return;
    }
}


bool    HomeScreen::handleEvent(const sf::Event &event)
{
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Return) {
        return this->goToGame = true;
    }

    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
        return false;
    }

    return true;
}
