#include <iostream>
using namespace std;

// Function definition
// This function uses void because it does NOT return any value
void printHello(){  
    cout << "hello world";   // only prints text
}

// This function returns an integer value
// So return type is int
int printHelloo(){   
    cout << "hello world";   // prints text
    return 3;                // returns value 3
}

int main() {
    // Function call
    // No value is returned, so we just call it
    printHello();

    // Function call
    // Returned value (3) is stored in variable val
    int val = printHelloo(); 

    // Printing the returned value
    cout << " returned value is: " << val;

    return 0;
}
