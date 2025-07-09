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
