#include <iostream>
#include <SFML/Graphics.hpp>
#include "GameController.h"

int main(int argc, char const *argv[]) {
    std::cout << "Hello World, Client is running" << std::endl;

    GameController *gc = new GameController();

    return 0;
}
