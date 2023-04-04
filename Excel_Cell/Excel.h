//
// Created by 김태경 on 2023/04/04.
//
#ifndef EXCEL_CELL_EXCEL_H
#define EXCEL_CELL_EXCEL_H
#include <iostream>
#include <vector>
#include <string>
#include "Cell.h"
using namespace std;


class Excel {
public:
    Excel(std::vector<std::vector<Cell>> data);
    double average(int fromRow, int fromCol, int toRow, int toCol) const;
private:
    std::vector<std::vector<Cell>> data;
};

#endif //EXCEL_CELL_EXCEL_H
