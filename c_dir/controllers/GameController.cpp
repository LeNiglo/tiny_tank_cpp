#include "GameController.h"

GameController::GameController()
{
    this->game = new Game();
}

GameController::~GameController()
{
    delete this->game;
}

Game* GameController::getGame() const
{
    return this->game;
}

bool    GameController::handleEvent(const sf::Event &event)
{
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Up) {
        this->game->getPlayer()->getTank()->setDirectionBody(EDirection::TOP);
    } else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right) {
        this->game->getPlayer()->getTank()->setDirectionBody(EDirection::RIGHT);
    } else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Down) {
        this->game->getPlayer()->getTank()->setDirectionBody(EDirection::BOTTOM);
    } else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left) {
        this->game->getPlayer()->getTank()->setDirectionBody(EDirection::LEFT);
    }
    return true;
}
