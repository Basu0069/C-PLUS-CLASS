#include <bits/stdc++.h>
using namespace std;

class Person {
    int age;
    string name;
public:
    void input();
    void display();
};

void Person::input() {
    cin >> age;
    cin.ignore();
    getline(cin, name);
}

void Person::display() {
    cout << "Name is: " << name << " and age is: " << age << endl;
}

class Student : public Person {
    int rollno;
public:
    void input();
    void display();
};

void Student::input() {
    Person::input();
    cout << "Enter roll number: ";
    cin >> rollno;
}

void Student::display() {
    Person::display();
    cout << "Roll number is: " << rollno << endl;
}

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
