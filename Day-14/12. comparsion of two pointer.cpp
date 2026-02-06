#include <iostream>
using namespace std;

int main() {
    int a = 10; 
    int b = 20;

    int *ptr1 = &a; // pointer to a
    int *ptr2 = &b; // pointer to b
    // Comparing the values pointed to by ptr1 and ptr2
    if (*ptr1 < *ptr2) {
        cout << "Value pointed to by ptr1 is less than value pointed to by ptr2" << endl;
    } else if (*ptr1 > *ptr2) {
        cout << "Value pointed to by ptr1 is greater than value pointed to by ptr2" << endl;
    } else {
        cout << "Value pointed to by ptr1 is equal to value pointed to by ptr2" << endl;
    }

    return 0;
}