//
// Created by 김태경 on 2023/04/04.
//
#include "Excel.h"
#include "Cell.h"

using namespace std;

double Excel::average(int fromRow, int fromCol, int toRow, int toCol) const {
//    double val=0;
//    for (int i=0; i<(toRow-fromRow+1); i++){
//        Cell a=this->data[fromRow+i][fromCol];
//        if (a.getType()==INT){ //최대한 private보다는 함수호출로 값에 접근
//            val+=a.getIntVal();
//        }
//        else if(a.getType()==DOUBLE){
//            val+=a.getDoubleVal();
//        }
//        else{
//            continue;
//        }
//    }
//    val=val/(toRow-fromRow+1);
//    return val;
    double val =0;
    for (int i=0; i<(toRow-fromRow+1); i++){
        if(data[fromRow+i][fromCol].getType()==INT){
            val+=data[fromRow+i][fromCol].getIntVal();
        }
        else if(data[fromRow+1][fromCol].getType()==DOUBLE){
            val+=data[fromRow+i][fromCol].getDoubleVal();
        }
        else{
            continue;
        }
    }
    val=val/(toRow-fromRow+1);
    return val;
}// Cell객체 생성을 하지 않고 바로 비교 후 값을 대입하여 오버헤드를 줄임.

Excel::Excel(std::vector<std::vector<Cell>> data) {
    this->data=data;


}
