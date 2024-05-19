#include "data.h"
#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;
    Stack<int> s(size);
    s.operations();
    return 0;
}