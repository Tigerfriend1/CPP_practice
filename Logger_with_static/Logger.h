//
// Created by 김태경 on 2023/04/05.
//

#ifndef LOGGER_WITH_STATIC_LOGGER_H
#define LOGGER_WITH_STATIC_LOGGER_H

#include <string>

enum LogLevel {
    DEBUG = 0,
    INFO = 1,
    WARNING = 2,
    ERROR = 3
};


class Logger {

private:
    static int logLevel;
public:

    Logger(int level){logLevel=level;};
    ~Logger(){logLevel=1;};

    static void setLogLevel(int level);

    static void info(const char *string, const std::string Tag);

    static void warning(const char *string, const std::string Tag);

    static void error(const char *string, const std::string Tag);

    static void debug(const char *string, const std::string Tag);


};
#endif //LOGGER_WITH_STATIC_LOGGER_H
