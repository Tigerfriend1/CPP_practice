#include "Logger.h"
#include <string>
#include <iostream>
using namespace std;

const std::string TAG = "main";

int main() {
    int level;
    std::cin >> level;
    switch(level) {
        case 0: Logger::setLogLevel(DEBUG); break;
        case 1: Logger::setLogLevel(INFO); break;
        case 2: Logger::setLogLevel(WARNING); break;
        case 3: Logger::setLogLevel(ERROR); break;
        default: Logger::setLogLevel(DEBUG); break;
    }
    //static 선언을 했기 때문에 함수를 호출할 때, 객체를 생성하지 않아도 호출할 수 있다.
    Logger::setLogLevel(level);
    Logger::debug("This is a debug message", TAG);
    Logger::info("This is an info message", TAG);
    Logger::warning("This is a warning message", TAG);
    Logger::error("This is an error message", TAG);

    return 0;
}