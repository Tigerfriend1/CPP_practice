#include "shape.h"
using namespace std;

vector<Shape>shape_list;
int next_id = 0;

void create_rectangle(Point& pos1, Point& pos2){
    Shape newShape{next_id,ShapeType::RECT, pos1, pos2, 0, 0, 0,0,0,0};
    newShape.width=abs(pos1.x-pos2.x);
    newShape.height=abs(pos1.y-pos2.y);
    newShape.center.x=(pos1.x+pos2.x)/2;
    newShape.center.y=(pos1.y+pos2.y)/2;
    newShape.area=newShape.width*newShape.height;
    shape_list.push_back(newShape);
    next_id++;


}
void create_circle(Point& center, int radius){
    Shape newShape{next_id, ShapeType::CIRCLE,0,0, 0,0, center, radius,2*radius,2*radius,0};
    newShape.area=radius*radius*3.14159;
    shape_list.push_back(newShape);
    next_id++;
}
bool isCorrect(Shape a) {return a.id==id;}

void move_shape(int id, int x, int y){
    find_if(shape_list.begin(),shape_list.end(), isCorrect);
}

void align_shapes(){

    auto pre=shape_list.begin();
    move_shape(pre->id,0,0);
    for (auto now=shape_list.begin()+1;now!=shape_list.end();now++){
        if (pre->center.x+now->width/2 <= pre->center.y+now->height/2){
            move_shape(now->id,pre->center.x+now->width/2,pre->center.x+now->width/2);
        }
        else{
            move_shape(now->id,pre->center.y+now->height/2,pre->center.y+now->height/2);
        }

    }
}

bool cmp(Shape a, Shape b){
    if (a.area==b.area){
        return a.id<b.id;
    }
    return a.area<b.area;
}

void sort_shapes(){
    sort(shape_list.begin(),shape_list.end(), cmp);
}
int find_furthest_shape();
void remove_shape_by_id(int id);

void print_tmp(Shape shape){
    cout << shape.id;
    switch (shape.shapeType) {
        case ShapeType::RECT:
            cout<<"Type: RECT, ";
            cout << "Position (" << shape.center.x <<", " << shape.center.y <<"), " << "Width: "<< shape.width<<", Height: "<<shape.height<<", Area: "<<shape.area<<endl;
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