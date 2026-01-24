#include <iostream>
using namespace std;

int main(){
    int x = 10; // Global scope within main function

    {
        // Start of a new block
        int x = 20; // Local scope within this block, shadows outer x
        cout << "Inner block x: " << x << endl; // Outputs 20
    } // End of the block

    cout << "Outer block x: " << x << endl; // Outputs 10

    return 0;
}