#include <iostream>
#include "Server.h"

int main(int argc, char const *argv[]) {
    Server *server = new Server(4242);
    server->listen();

    return 0;
}
