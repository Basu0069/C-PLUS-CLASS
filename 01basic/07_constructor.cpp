#include<iostream>
using namespace std;
class Student{
    int rollno;
    static int count;
    public:
    Student(){
        rollno=count++;
        cout<<"Constructor"<<endl;
    }

    Student(int r){
        rollno = r;
        cout<<"\nParametrized constructor";
    }
    void setrollno(){

    }
    void display(){
        cout<<"\nRoll no is "<<rollno;
    }
};

int Student::count=1;
int main(){
    Student s1,s2;
    Student s3(45);
    s1.display();
    s2.display();
    s3.display();
}