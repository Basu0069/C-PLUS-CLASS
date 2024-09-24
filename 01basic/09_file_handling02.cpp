#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream f("C:\\Users\\acer\\OneDrive\\Desktop\\STUDY\\C-PLUS-CLASS\\01basic\\02.txt")
    cout<<f.is_open();


    ifstream fin("C:\\Users\\acer\\OneDrive\\Desktop\\STUDY\\C-PLUS-CLASS\\01basic\\02.txt");
    if(fin.is_open());
{
    int rn;
    string n;
     
     fin>>rn;
     fin>>n;

     while(fin)
{
    cout<<rn<<" ";
    cout<<n;
    cout<<endl;
    fin>>rn;
    fin>>n;

}}}
