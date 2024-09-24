#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream f("C:\\Users\\acer\\OneDrive\\Desktop\\STUDY\\C-PLUS-CLASS\\01basic\\01.txt");
    cout<<f.is_open();

    f<<"21";
    f<<"\nsagf";
    f.close();

}