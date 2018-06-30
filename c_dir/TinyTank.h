#ifndef TINYTANK_H_
# define TINYTANK_H_

# include <SFML/Graphics.hpp>

# include "controllers/DebugController.hpp"
# include "screens/IScreen.hpp"

const int WIN_WIDTH = 1024;
const int WIN_HEIGHT = 768;

class TinyTank
{
public:
    TinyTank(int, char const *[]);
    TinyTank(const TinyTank &);
    virtual ~TinyTank();

    sf::RenderWindow* getWindow() const;

    int run();

private:
    sf::RenderWindow* window;
    IScreen* screen;
};

#endif /* end of include guard: TINYTANK_H_ */
