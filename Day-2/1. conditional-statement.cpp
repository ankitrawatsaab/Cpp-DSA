#include <iostream>
using namespace std;

int main(){
    // Positive and number check
    int n;
    cout << "Enter an number: ";
    cin >> n;
    if(n>=0){
        cout << n << " is a positive number." << endl;
    }
    else{
        cout << n << " is a ngative number." << endl;
    }

    // Age verification
    int age = 20;
    if(age >= 18){
        cout << "You are eligible to vote." << endl;
    }
    else{
        cout << "You are not eligible to vote." << endl;
    }

    // Even or odd check
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if(num % 2 == 0){
        cout << num << " is an even number." << endl;
    }
    else{
        cout << num << " is an odd number." << endl;
    }
    return 0;
}