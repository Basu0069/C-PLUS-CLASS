#include<bits/stdc++.h>
using namespace std;
class Circle{
    protected:
    double radius;
    public:
    void setValue(double r){
        radius= r;
    }
    double getRadius(){
        return radius;
    }
};

class Cylinder: private Circle{
private:
double height;
public:
void setValue(double r, double h){
    Circle::setValue(r);
    height=h;
}
double volume(){
    return 3.14*getRadius()*getRadius()*height;
}

}