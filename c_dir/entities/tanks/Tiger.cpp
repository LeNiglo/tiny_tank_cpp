#include "./Tiger.h"

Tiger::Tiger()
{
    sf::Vector2f tankSize(50, 75);

    this->drawing.drawableBody = new sf::RectangleShape();
    ((sf::RectangleShape *) this->drawing.drawableBody)->setSize(tankSize - sf::Vector2f(3, 3));
    ((sf::RectangleShape *) this->drawing.drawableBody)->setOutlineThickness(3);
    ((sf::RectangleShape *) this->drawing.drawableBody)->setOutlineColor(sf::Color::White);
    ((sf::RectangleShape *) this->drawing.drawableBody)->setFillColor(sf::Color::Red);
    ((sf::RectangleShape *) this->drawing.drawableBody)->setOrigin(tankSize / 2.f);
    ((sf::RectangleShape *) this->drawing.drawableBody)->setPosition(WIN_WIDTH / 2, WIN_HEIGHT / 2);

    this->drawing.drawableTop = new sf::RectangleShape();
    ((sf::RectangleShape *) this->drawing.drawableTop)->setSize(tankSize - sf::Vector2f(30, 30));
    ((sf::RectangleShape *) this->drawing.drawableTop)->setOutlineThickness(2);
    ((sf::RectangleShape *) this->drawing.drawableTop)->setOutlineColor(sf::Color::Blue);
    ((sf::RectangleShape *) this->drawing.drawableTop)->setFillColor(sf::Color::Red);
    ((sf::RectangleShape *) this->drawing.drawableTop)->setOrigin(tankSize / 2.f);
    ((sf::RectangleShape *) this->drawing.drawableTop)->setPosition(WIN_WIDTH / 2, WIN_HEIGHT / 2);

}

Tiger::~Tiger()
{

}
