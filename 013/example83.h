#ifndef EXAMPLE83
#define EXAMPLE83

#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    Polygon (int a, int b): width(a), height(b) {}
    virtual int area (void) = 0;
    void printarea() {cout <<this->area()<<'\n';}
};
class Rectangle: public Polygon {
  public:
    Rectangle(int a,int b): Polygon(a,b) {}
    int area() {return width*height;}
};
class Triangle: public Polygon {
  public:
    Triangle(int a,int b): Polygon(a,b) {}
    int area() {return width*height/2;}
};
#endif


