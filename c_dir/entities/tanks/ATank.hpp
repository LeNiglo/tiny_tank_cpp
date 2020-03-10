#ifndef ATANK_HPP_
# define ATANK_HPP_

# include "../../includes.h"
# include "./EDirection.hpp"

class ATank
{
protected:
    struct {
        EDirection directionBody = EDirection::RIGHT;
        int directionTop = 0;
        sf::Drawable *drawableBody;
        sf::Drawable *drawableTop;

        struct {
            double centerX;
            double centerY;
        } body;

        struct {
            double centerX;
            double centerY;
        } top;

    } drawing;

public:
    ATank() {};
    virtual ~ATank () {
        delete this->drawing.drawableBody;
        delete this->drawing.drawableTop;
    };
    void setDirectionBody(const EDirection &dir) { this->drawing.directionBody = dir; }
    void setDirectionTop(const int &dir) { this->drawing.directionTop = dir; }
    sf::Drawable* getDrawableBody() { return this->drawing.drawableBody; };
    sf::Drawable* getDrawableTop() { return this->drawing.drawableTop; };
    void render(sf::RenderWindow *window) {
        ((sf::Shape *) this->drawing.drawableBody)->setRotation(this->drawing.directionBody);
        window->draw(* this->drawing.drawableBody);
        ((sf::Shape *) this->drawing.drawableTop)->setRotation(this->drawing.directionTop);
        window->draw(* this->drawing.drawableTop);
    };

    struct {
        double speed = 0.0;
        double health = 0.0;
        double damage = 0.0;
        double armor = 0.0;
    } stats;
};

# include "./Tiger.h"
# include "./Sniper.h"
# include "./Rusher.h"

#endif /* end of include guard: ATANK_HPP_ */
