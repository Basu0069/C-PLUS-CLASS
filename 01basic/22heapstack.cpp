#include <iostream>
#include <vector>
#include <stdexcept> // For std::runtime_error

using namespace std;

template <typename T>
class Stack {
private:
    vector<T> elements; // Using a vector to store stack elements

public:
    // Push an element onto the stack
    void push(const T& element) {
        elements.push_back(element);
    }

    // Pop an element from the stack
    void pop() {
        if (isEmpty()) {
            throw runtime_error("Stack is empty. Cannot pop.");
        }
        elements.pop_back();
    }

    // Get the top element of the stack
    T top() const {
        if (isEmpty()) {
            throw runtime_error("Stack is empty. Cannot retrieve top element.");
        }
        return elements.back();
    }

    // Check if the stack is empty
    bool isEmpty() const {
        return elements.empty();
    }

    // Get the size of the stack
    size_t size() const {
        return elements.size();
    }
};

int main() {
    Stack<int> intStack; // Creating a stack for integers
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    cout << "Top element: " << intStack.top() << endl; // Should print 30
    cout << "Stack size: " << intStack.size() << endl; // Should print 3

    intStack.pop();
    cout << "Top element after pop: " << intStack.top() << endl; // Should print 20
    cout << "Stack size after pop: " << intStack.size() << endl; // Should print 2

    // Creating a stack for strings
    Stack<string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");

    cout << "Top element in string stack: " << stringStack.top() << endl; // Should print "World"

    return 0;
}













#include<iostream>
using namespace std;
template <class T>
class stack{
    T top;
    T a[10];
    public:
    Stack(){
        top=-1;
    }
    void push(t input){
        a[++top]=input;
    }
    void display(){
        for(T i=0;i<top+1;i++){
            cout<<a[i]<<" ";
        }
    }
};

int main(){
Stack S;


    return 0;
}

























