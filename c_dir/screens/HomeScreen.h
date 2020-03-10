#ifndef HOMESCREEN_H_
# define HOMESCREEN_H_

# include "./AScreen.hpp"

class HomeScreen : public AScreen
{
private:
    bool goToGame;

public:
    HomeScreen();
    virtual ~HomeScreen();
    virtual void render(sf::RenderWindow *);
    virtual void update(EScreen *);
    virtual bool handleEvent(const sf::Event &);
};

#endif /* end of include guard: HOMESCREEN_H_ */
