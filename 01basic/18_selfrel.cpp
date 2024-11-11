#include<iostream>
using namespace std;
class Shape
{
protected:
float area;
public:
virtual float calarea()=0;
void displayarea()
{
cout<<"\nArea is "<<area;
}

};
class Circle: public Shape
{
int radius;
public:
Circle()
{
radius =5;
}
float calarea()
{
cout<<"\nCircle class function being called";
area=3.14f *radius *radius;
return area;
}
void displayarea()
{
cout<<"\nArea is "<<area;
}
};

class Triangle: public Shape
{
int height, base;
public:
Triangle()
{
height =5, base =10;
}
float calarea()
{
cout<<"\nTriangle class function being called";
area=height*base/2;
return area;
}

};

int main()
{
Shape *S;

Circle C;
S=&C;
S->calarea();
S->displayarea();

Triangle T;
S=&T;
S->calarea();
S->displayarea();
}


...
..
...
..