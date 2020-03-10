#ifndef PLAYER_H_
# define PLAYER_H_

# include "../includes.h"
# include "../entities/tanks/ATank.hpp"

class Player
{
private:
    std::string username;
    ATank *tank;

public:
    Player(const std::string &);
    Player(const Player &);
    Player operator=(const Player &);
    virtual ~Player();
    void render(sf::RenderWindow *);
    
    std::string getUsername() const;
    ATank* getTank();
};

#endif /* end of include guard: PLAYER_H_ */
