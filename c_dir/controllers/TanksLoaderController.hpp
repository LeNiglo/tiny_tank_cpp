#ifndef TANKSLOADERCONTROLLER_HPP_
# define TANKSLOADERCONTROLLER_HPP_

# include "../includes.h"
#include <nlohmann/json.hpp>

class TanksLoaderController
{
private:
    TanksLoaderController () {};
    TanksLoaderController (const TanksLoaderController &) {};
    void operator=(const TanksLoaderController &) {};
    virtual ~TanksLoaderController () {};

    nlohmann::json json;

public:
    static TanksLoaderController* getInstance()
    {
        static TanksLoaderController instance;
        return &instance;
    };

    void init()
    {
        std::ifstream ifs("tanks.json");
        ifs >> this->json;
        DebugController::getInstance()->info(this->json.dump());
    }
};

#endif /* end of include guard: TANKSLOADERCONTROLLER_HPP_ */
