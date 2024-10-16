#include<iostream>
using namespace std;


class Distance{
    int km,mts;
    public:
    // Basic to Class conversion
    void operator=(int a){
        km=a/1000;
        mts=a%1000;
    }
    friend ostream& operator<<(ostream &d,Distance &T)
    {
        cout<<T.km<<"km and "<< T.mts<<"meters"<<endl;
        return cout;
    };
    // Class ot basic type conversion:
    operator int(){
        int s= km* 1000 + mts;
        return s;
    }
};

    int main(){
        Distance D;
        D=1678; // this can be done in two ways either by member function or by using constructor.Here we dont need to define "=" operator because class instance can take"=" for assigning value;
        
             cout<<D;
        int a;
        a=D;
        cout<<a<<" mts"<<endl;
    }