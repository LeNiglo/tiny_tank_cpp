#include "./Game.h"

Game::Game() : players()
{
    this->player = new Player("LeNiglo");
}

Game::Game(const Game &old)
{
    (void) old;
}

Game Game::operator=(const Game &old)
{
    (void) old;
    return *this;
}

Game::~Game()
{
    delete this->player;
    for (auto& player : this->players) {
        delete player;
    }
}

void    Game::render(sf::RenderWindow *window)
{
    for (auto& player : this->players) {
        player->render(window);
    }
    this->player->render(window);
}

Player* Game::getPlayer() const
{
    return this->player;
}
