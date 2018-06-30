#ifndef SERVER_H_
# define SERVER_H_

# include <SFML/Network.hpp>
# include <iostream>
# include <vector>

class Server {
private:
    int port;
    std::vector<sf::TcpSocket*> sockets;
    sf::TcpListener listener;

public:
    Server (int);
    virtual ~Server ();

    bool listen();
};

#endif /* end of include guard: SERVER_H_ */
