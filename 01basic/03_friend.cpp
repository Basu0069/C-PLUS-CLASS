#include<iostream>
using namespace std;
class ReferenceBook;
class TextBook
{
    int a;
    friend void display(TextBook, ReferenceBook);
    public:
    void input(){
        cin>>a;
    }
};

class ReferenceBook{
    int b;

    friend void display(TextBook, ReferenceBook);
    public:
    void input(){
        cin>>b;
    }
};

void display(TextBook T1, ReferenceBook R1){
    cout<<T1.a + R1.b;
}
int main(){
    TextBook T; ReferenceBook R;
    T.input();
    R.input();
    display(T,R);
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    string c;
    getline(cin,c);
    cout<<c;
}