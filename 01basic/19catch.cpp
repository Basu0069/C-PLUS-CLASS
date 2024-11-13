#include<iostream>
using namespace std;

void divide(int a,int b){
    if(b==0){
        throw -1;
        cout<<a<<b;
    }
}



int main() {
    int a, b;
    cin >> a >> b;

    try {
        cout << "In outer try\n";
        divide(a,b);
        cout<<"Next line...\n";



        try {
            cout << "In inner try\n";

            if (b == 0) {
                throw 1; 
            } else {
                cout << "Good to go..\n";
            }
        }
        catch (int a) {
            cout << "Integer catch (inner)\n"; 
        }
        catch (string a) {
            cout << "String catch (inner)\n"; 
        }

    }
    catch (...) {
        cout << "Outer catch....// Arbitrary catch\n"; 
    }

    return 0;
}

