#include "./Player.h"

Player::Player(const std::string &username)
{
    this->username = username;
    this->tank = new Tiger();
}

Player::Player(const Player &old)
{
    this->username = old.getUsername();
}

Player Player::operator=(const Player &old)
{
    this->username = old.getUsername();
    return *this;
}

Player::~Player()
{
    delete this->tank;
}

void Player::render(sf::RenderWindow *window)
{
    this->tank->render(window);
}

std::string Player::getUsername() const
{
    return this->username;
}

ATank*  Player::getTank()
{
    return this->tank;
}
