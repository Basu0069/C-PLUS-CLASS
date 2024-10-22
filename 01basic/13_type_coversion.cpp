#include<iostream>
using namespace std;


class Distance{
    int km,mts;
    public:
    void operator=(int a){
        km=a/1000;
        mts=a%1000;
    }
    friend ostream& operator<<(ostream &d,Distance &T)
    {
        cout<<T.km<<" "<< T.mts;
        return cout;
    };
};
    int main(){
        Distance D;
        D=1678;
        cout<<D;
    }