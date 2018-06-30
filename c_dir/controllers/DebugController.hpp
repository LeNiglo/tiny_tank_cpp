#ifndef DEBUGCONTROLLER_HPP_
# define DEBUGCONTROLLER_HPP_

# include <iostream>
# include <string>

class DebugController
{
private:
    DebugController () {};
    DebugController (const DebugController &) {};
    void operator=(const DebugController &) {};
    virtual ~DebugController () {};

public:
    static DebugController* getInstance()
    {
        static DebugController instance;
        return &instance;
    };

    void info(const std::string& str)
    {
        std::cout << str << std::endl;
    };

    void error(const std::string& str)
    {
        std::cerr << str << std::endl;
    };

};

#endif /* end of include guard: DEBUGCONTROLLER_HPP_ */
