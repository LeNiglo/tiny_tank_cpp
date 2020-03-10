#include "GameScreen.h"

GameScreen::GameScreen()
{
    this->goToHome = false;
    this->gc = new GameController();
}

GameScreen::~GameScreen()
{
    delete this->gc;
}

void    GameScreen::render(sf::RenderWindow *window)
{
    this->gc->getGame()->render(window);
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

     this->gc->handleEvent(event);

     return true;
}
