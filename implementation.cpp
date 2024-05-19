#include "data.h"
#include <iostream>

using namespace std;

template <typename T>
Stack<T>::Stack(int size) {
    n = size;
    a = new T[n];
    top = -1;
}

template <typename T>
Stack<T>::~Stack() {
    delete[] a;
}

template <typename T>
void Stack<T>::push(T element) {
    if (top == n - 1) {
        cout << "Stack is full\n";
    } else {
        top++;
        a[top] = element;
    }
}

template <typename T>
T Stack<T>::pop() {
    if (top < 0) {
        cout << "Stack Underflow!" << endl;
    } else {
        T element = a[top];
        top--;
        return element;
    }
}

template <typename T>
void Stack<T>::display() {
    if (top >= 0) {
        cout << "The Stack Elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << a[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Stack is Empty." << endl;
    }
}

template <typename T>
void Stack<T>::operations() {
    int ch;
    while (true) {
        cout << "\nStack Operations Menu\n1- Push an element\n2- Pop\n3- Display the elements\n4- Exit\nSelect an operation: ";
        cin >> ch;
        switch (ch) {
            case 1: {
                T element;
                cout << "Enter the element to push: ";
                cin >> element;
                push(element);
                break;
            }
            case 2: {
                T val = pop();
                if (val != T())  // Check for default value indicating empty stack
                    cout << "Popped element: " << val << endl;
                break;
            }
            case 3: {
                display();
                break;
            }
            case 4: {
                exit(0);
            }
            default: {
                cout << "Invalid choice.\n";
            }
        }
    }
}
