#include <iostream>
using namespace std;

int main() {
    // Array pointer
    int arr[5] = {1,2,3,4,5};

    // prints the address of the first element of the array
    cout << arr << endl; 

    // prints the value of the first element of the array
    cout<< *arr << endl; 

    cout<< &arr;

    return 0;
}