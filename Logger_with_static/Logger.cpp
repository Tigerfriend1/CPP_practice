#include "Logger.h"
#include <iostream>
#include <string>
using namespace std;

int Logger::logLevel=1;

void Logger::setLogLevel(int level) {
    logLevel=level;

}

void Logger::info(const char *string, const std::string Tag) {
    if (logLevel<=INFO){
        cout<<"[INFO]"<<Tag<<" "<<string<<endl;
    }

}

void Logger::warning(const char *string, const std::string Tag) {
    if (logLevel<=WARNING){
        cout<<"[WARNING]"<<Tag<<" "<<string<<endl;
    }
}

void Logger::error(const char *string, const std::string Tag) {
    if (logLevel<=ERROR){
        cout<<"[ERROR]"<<Tag<<" "<<string<<endl;
    }
}

void Logger::debug(const char *string, const std::string Tag) {
    if (logLevel<=DEBUG){
        cout<<"[DEBUG]"<<Tag<<" "<<string<<endl;
    }
}


