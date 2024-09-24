#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream f1("r.txt",ios::in);
    fstream f2("r1.txt", ios::out);
    if(f1.is_open() && f2.is_open())
    {
        char c;
        c=f1.get();
        while(c!=EOF)
        {
            f2.put(c);
            c=f1.get
        }
    }
}