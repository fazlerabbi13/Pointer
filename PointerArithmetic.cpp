#include <iostream>
using namespace std;

int main() {

    int n = 27;
    
    // Storing address of n in ptr
    int* ptr = &n;

    // Print size of int
    cout << "Size of int: " << sizeof(int) << endl;

    // Print the address stored at ptr
    cout << "Before Increment: " << ptr << endl;
    
    // Increment pointer
    ptr++;
    cout << "After Increment: " << ptr << endl;

    // Print the address stored at ptr
    cout << "Before Decrement: " << ptr << endl;
    
    // Decrement pointer
    ptr--;
    cout << "After Decrement: " << ptr;

    return 0;
}