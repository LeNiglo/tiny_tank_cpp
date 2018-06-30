#include "Server.h"

Server::Server(int port): port(port), sockets()
{
    std::cout << "Server starting on port " << this->port << std::endl;
}

Server::~Server ()
{

}


bool            Server::listen()
{
    char data[1024];
    size_t dataReceived = 0;
    sf::SocketSelector selector;

    if (this->listener.listen(this->port) != sf::Socket::Done) {
        return false;
    }

    if (selector.wait(sf::seconds(10)))
    {
        for (auto it = this->sockets.begin(); it != this->sockets.end(); ++it) {
            if (selector.isReady(**it)) {
                if ((*it)->receive(data, strlen(data), dataReceived) != sf::Socket::Done) {
                    return false;
                }
                std::cout << "Message : " << data << std::endl;
            }
        }

        // accept a new connection
        if (selector.isReady(this->listener)) {
            sf::TcpSocket* ptr = new sf::TcpSocket();

            if (this->listener.accept(*ptr) != sf::Socket::Done) {
                return false;
            }
            this->sockets.push_back( std::move(ptr) );
        }
    }
    return true;
}
