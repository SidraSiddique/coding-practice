#include <iostream>
using namespace std;

#define SIZE 100  

class Stack {
private:
    int arr[SIZE]; 
    int top;      

public:
    // Constructor
    Stack() {
        top = -1;
    }
void push(int value) {
        if (top >= SIZE - 1) {
            cout << "Stack Overflow!" << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed to stack." << endl;
        }
    }

    // Pop element from stack
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;
        }
}
