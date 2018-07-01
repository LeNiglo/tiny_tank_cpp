#ifndef ASCREEN_HPP_
# define ASCREEN_HPP_

# include "../includes.h"

enum EScreen
{
    LOADING,
    LOGIN,
    HOME,
    GAME,
    ENDGAME,
};

class AScreen
{
public:
    AScreen() {};
    virtual ~AScreen() {};
    virtual void render(sf::RenderWindow *) = 0;
    virtual void update(EScreen *) = 0;
    virtual bool handleEvent(const sf::Event &) = 0;
private:
};

# include "./EndGameScreen.h"
# include "./GameScreen.h"
# include "./HomeScreen.h"
# include "./LoadingScreen.h"
# include "./LoginScreen.h"

#endif /* end of include guard: ASCREEN_HPP_ */
