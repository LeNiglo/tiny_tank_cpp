#ifndef GAMESCREEN_H_
# define GAMESCREEN_H_

# include "./AScreen.hpp"
# include "../controllers/GameController.h"

class GameScreen : public AScreen
{
private:
    bool goToHome;
    GameController *gc;

public:
    GameScreen();
    virtual ~GameScreen();
    virtual void render(sf::RenderWindow *);
    virtual void update(EScreen *);
    virtual bool handleEvent(const sf::Event &);
};

#endif /* end of include guard: GAMESCREEN_H_ */
