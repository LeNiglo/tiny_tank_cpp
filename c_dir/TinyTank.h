#ifndef TINYTANK_H_
# define TINYTANK_H_

# include "includes.h"
# include "screens/AScreen.hpp"

class TinyTank
{
private:
    void initScreens();


    sf::RenderWindow* window;
    std::map<EScreen, AScreen*> screens;
    EScreen currentScreen;

public:
    TinyTank(int, char const *[]);
    TinyTank(const TinyTank &);
    virtual ~TinyTank();

    sf::RenderWindow* getWindow() const;
    AScreen* getScreen() const;

    int run();
};

#endif /* end of include guard: TINYTANK_H_ */
