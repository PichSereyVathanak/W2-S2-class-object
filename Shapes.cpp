#include <iostream>
#include <string>
using namespace std;

class Point2D {
public:
    double x;
    double y;

    Point2D(double x_val, double y_val) : x(x_val), y(y_val) {} // here is like this->x=x_val;

    double isEqual(const Point2D& other) {
        return this->x==other.x && this->y==other.y; // relate with coompare in Rectagle class for isEqual 
    }
};

class Rectangle {
public:
   Point2D bottomLeft;
   double width;
   double height;

   Rectangle(const Point2D& bottomLeft, const Point2D& topRight) : bottomLeft(bottomLeft){
    // this->bottomLeft = bottomLeft; 
    width = topRight.x - bottomLeft.x;
    height = topRight.y - bottomLeft.y;
}


   double perimeter() const {
    return 2*(width + height);
   }

   double area() const {
    return width*height;
   }

   bool isEqual (const Rectangle& other) {
    return bottomLeft.isEqual(other.bottomLeft) && (width == other.width) && (height == other.height);

   }

};

int main() {
    Point2D p1(0,0);
    Point2D p2(10,20);

    Rectangle r1(p1, p2);
    Rectangle r2(p1, p2);

    string message = r1.isEqual(r2)? "rectangles are equal" : "rectangles are not equal";
    cout<< message << endl;


    return 0;
}