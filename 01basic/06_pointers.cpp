#include<iostream>
using namespace std;
int main(){
    char ch[]="ABC";
    char *ptr= ch;
    int *p;
    int a;
    char carr[]={'K','2','3','H','G'};
    cout<<"SIze of pointer to integer: "<<sizeof(p)<<endl;
    cout<<"Size of integer a: "<<sizeof(a)<<endl;
    cout<<"Size of array is: "<<sizeof(ch)<<endl;
    cout<<"Size of array carr:"<<sizeof(carr)<<endl;
    cout<<ch<<endl;
    cout<<p<<endl;
    char ch[]="ABC";
    cout<<ch<<endl;
    cout<<carr<<endl;
    


}