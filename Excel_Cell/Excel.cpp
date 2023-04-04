//
// Created by 김태경 on 2023/04/04.
//
#include "Excel.h"
#include "Cell.h"

using namespace std;

double Excel::average(int fromRow, int fromCol, int toRow, int toCol) const {
    double val=0;
    for (int i=0; i<(toRow-fromRow+1); i++){
        Cell a=this->data[fromRow+i][fromCol];
        if (a.getType()==INT){
            val+=a.getIntVal();
        }
        else if(a.getType()==DOUBLE){
            val+=a.getDoubleVal();
        }
        else{
            continue;
        }

    }
    val=val/(toRow-fromRow+1);

    return val;
}

Excel::Excel(std::vector<std::vector<Cell>> data) {
    this->data=data;


}
