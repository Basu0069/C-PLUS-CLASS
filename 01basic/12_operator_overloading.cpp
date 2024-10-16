#include <iostream>
using namespace std;

class CN {
    int real;
    int img;
public:
    void input() {
        cin >> real >> img;
    }

    void display() {
        cout << "Real part: " << real << " Imaginary part: " << img << endl;
    }

    CN operator+(CN &C) {
        CN t;
        t.real = real + C.real;
        t.img = img + C.img;
        return t;
    }

    CN operator-() {
        CN t;
        t.real = -real;
        t.img = -img;
        return t;
    }

    friend ostream& operator<<(ostream &, const CN &);

    CN operator++(int){
        CN T;
        T.real = real, T.img=img;
        real++;img++;
        return T;
    }
};

ostream& operator<<(ostream &d, const CN &C) {
    d << "Real is " << C.real << " img is " << C.img;
    return d;
}

int main() {
    CN C1, C2, C3,C4,C5;
    C1.input();
    C2.input();
    C3 = C1 + C2;  // Using overloaded operator+
    C3.display();
    
    C3 = -C2;  // Using overloaded unary operator-
    C3.display();
    
    cout << C1 << endl << C3 << endl;

    C5=C1++;
    cout<<C1<<C5;
    return 0;
}
