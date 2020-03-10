#ifndef GAMECONTROLLER_H_
# define GAMECONTROLLER_H_

# include "../game/Game.h"

class GameController
{
private:
    Game* game;
public:
    GameController ();
    virtual ~GameController ();
    Game* getGame() const;
    bool handleEvent(const sf::Event &);
};

#endif /* end of include guard: GAMECONTROLLER_H_ */
