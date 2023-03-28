#include "shape.h"
using namespace std;

vector<Shape>shape_list;
int next_id = 0;

void create_rectangle(Point& pos1, Point& pos2){
    Shape newShape{next_id,ShapeType::RECT, pos1, pos2, 0, 0, 0,0,0,0};
    newShape.width=abs(pos1.x-pos2.x);
    newShape.height=abs(pos1.y-pos2.y);
    newShape.area=newShape.width*newShape.height;
    shape_list.push_back(newShape);
    next_id++;


}
void create_circle(Point& center, int radius){
    Shape newShape{next_id, ShapeType::CIRCLE,0,0, 0,0, center, radius,0,0,0};
    newShape.area=radius*radius*3.14159;
    shape_list.push_back(newShape);
    next_id++;
}
void move_shape(int id, int x, int y);
void sort_shapes();
int find_furthest_shape();
void remove_shape_by_id(int id);
void align_shapes();
void print_tmp(Shape shape){
    cout << shape.id;
    switch (shape.shapeType) {
        case ShapeType::RECT:
            cout<<"Type: RECT, ";
            cout << "Position (" << shape.pos1.x <<", " << shape.pos1.y <<"), " << "Width: "<< shape.width<<", Height: "<<shape.height<<", Area: "<<shape.area<<endl;
            break;
        case ShapeType::CIRCLE:
            cout<<"Type: CIRCLE, ";
            cout<< "Center ("<<shape.center.x<<", "<<shape.center.y<<"), "<<"Radius: "<<shape.radius<<", "<<"Area: "<<shape.area<<endl;
            break;
        default:
            break;
    }

}
void print_shapes() {
    for_each(shape_list.begin(),shape_list.end(), print_tmp);
}