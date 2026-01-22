#include <iostream>
using namespace std;

// Function to print Fibonacci series up to n terms
void fibonacci(int n) {
    int a = 0, b = 1;
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    fibonacci(10);
    return 0;
}
