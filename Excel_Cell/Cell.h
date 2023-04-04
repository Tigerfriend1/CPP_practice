//
// Created by 김태경 on 2023/04/04.
//

#ifndef EXCEL_CELL_CELL_H
#define EXCEL_CELL_CELL_H
#include <iostream>
#include <vector>
#include <string>
//#include "Excel.h"
using namespace std;

enum CELL_TYPE {
    STRING,
    INT,
    DOUBLE
};

class Cell {

public:
    Cell();
    Cell(std::string val);
    Cell(int val);
    Cell(double val);

    CELL_TYPE getType() const;
    std::string getStringVal() const;
    int getIntVal() const;
    double getDoubleVal() const;
private:
    CELL_TYPE type;
    std::string stringVal;
    int intVal;
    double doubleVal;
};


#endif //EXCEL_CELL_CELL_H
