#include "TinyTank.h"

TinyTank::TinyTank(int argc, char const *argv[])
{
    this->window = new sf::RenderWindow(sf::VideoMode(WIN_WIDTH, WIN_HEIGHT), "TinyTank", sf::Style::Titlebar | sf::Style::Close);
    this->window->setVerticalSyncEnabled(true);

    this->screen = new HomeScreen();

    DebugController::getInstance()->info("Launching TinyTank to the Moon !");
}

TinyTank::TinyTank(const TinyTank &old)
{
    this->window = old.getWindow();

    this->screen = new HomeScreen();

    DebugController::getInstance()->info("Launching TinyTank to the Moon !");
}

TinyTank::~TinyTank()
{
    delete this->window;
}

sf::RenderWindow*   TinyTank::getWindow() const
{
    return this->window;
}

int    TinyTank::run()
{
    while (this->window->isOpen()) {
        sf::Event event;

        while (this->window->pollEvent(event)) {
            if (event.type == sf::Event::Closed || (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)) {
                this->window->close();
                break;
            }
        }
    }

    return EXIT_SUCCESS;
}
