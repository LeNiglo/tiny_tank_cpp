#include "TinyTank.h"
#include "controllers/DebugController.hpp"
#include "controllers/TanksLoaderController.hpp"

int main(int argc, char const *argv[]) {
    TanksLoaderController::getInstance()->init();

    TinyTank *tt = new TinyTank(argc, argv);
    return tt->run();
}
