#include "TinyTank.h"

TinyTank::TinyTank(int argc, char const *argv[])
{
    (void) argc;
    (void) argv;
    
    this->window = new sf::RenderWindow(sf::VideoMode(WIN_WIDTH, WIN_HEIGHT), "TinyTank", sf::Style::Titlebar | sf::Style::Close);
    this->window->setVerticalSyncEnabled(true);

    this->initScreens();

    DebugController::getInstance()->info("Launching TinyTank to the Moon !");
}

TinyTank::TinyTank(const TinyTank &old)
{
    this->window = old.getWindow();

    this->initScreens();

    DebugController::getInstance()->info("Launching TinyTank to the Moon !");
}

TinyTank::~TinyTank()
{
    delete this->window;

    for (auto& screen: this->screens) {
        delete screen.second;
    }
}

sf::RenderWindow*   TinyTank::getWindow() const
{
    return this->window;
}

AScreen*    TinyTank::getScreen() const
{
    return this->screens.at(this->currentScreen);
}

void TinyTank::initScreens()
{
    this->currentScreen = EScreen::HOME;

    this->screens.insert(std::pair<EScreen, AScreen*>(EScreen::HOME, new HomeScreen()));
    this->screens.insert(std::pair<EScreen, AScreen*>(EScreen::GAME, new GameScreen()));
}

int    TinyTank::run()
{
    while (this->window->isOpen()) {
        sf::Event event;

        while (this->window->pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                this->window->close();
                break;
            }

            if (this->getScreen()->handleEvent(event) == false) {
                this->window->close();
                break;
            }
        }

        this->getScreen()->update(&this->currentScreen);

        this->window->clear(sf::Color(0, 0, 0));
        this->getScreen()->render(this->window);
        this->window->display();
    }

    return EXIT_SUCCESS;
}
