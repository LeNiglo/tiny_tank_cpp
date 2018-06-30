#include "TinyTank.h"
#include "controllers/DebugController.hpp"

int main(int argc, char const *argv[]) {
    TinyTank *tt = new TinyTank(argc, argv);
    return tt->run();
}
