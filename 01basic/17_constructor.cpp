if a base class has constructor with arguments the it will be optional or mandatory for the derived class to have a constructor 

#include<iostream>
using namespace std;
class base{
    int i;
    public:
    base(int x){
        i=x;
        cout<<"i is:"<<i;
    }
};

class derived:public base{
    public:
    derived(int y):base(y){

    }
};
int main(){
    derived d(5);
}




20,40 , 32 ,128 



