#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};

    cout << *arr << endl; //  1 
    cout << *(arr + 1) << endl; // 2
    cout << *(arr + 2) << endl; // 3
    cout << *(arr + 3) << endl; // 4
    cout << *(arr + 4) << endl; // 5

    int *ptr = arr; // pointer to the first element of the array
    int *ptr2 = ptr + 2; // pointer to the third element of the array

    cout << ptr2 - ptr << endl; // 2
      
    // This will not compile because you cannot add two pointers together
    // cout<< ptr + ptr2 <<endl;  

    return 0;
}