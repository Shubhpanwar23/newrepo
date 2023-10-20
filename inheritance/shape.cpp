#include <iostream>
using namespace std;

class Shape{
    public:
    void Area();
    void perimeter();

};
class Circle{
 private:   int r;
public: Circle();
        Circle(int r);
        void Area(int r);
        void Perimeter(int r);

};
class Rectangle{
private: int l,b;

public: Rectangle();
        Rectangle(int l,int b);
        void Area(int l,int b);
        void perimeter(int l,int b);

};

class Triangle{
private: int b,h;

public: Triangle();
        Triangle(int b,int h);
        void Area(int b,int h);
        void perimeter(int b,int h);

};