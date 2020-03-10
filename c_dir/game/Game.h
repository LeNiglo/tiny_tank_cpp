#ifndef GAME_H_
# define GAME_H_

# include "../includes.h"
# include "./Player.h"

class Game
{
private:
    Player *player;
    std::vector<Player *> players;

public:
    Game();
    Game(const Game&);
    Game operator=(const Game&);
    virtual ~Game();

    void render(sf::RenderWindow *);

    Player* getPlayer() const;
};

#endif /* end of include guard: GAME_H_ */
