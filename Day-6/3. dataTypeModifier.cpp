#include <iostream>
using namespace std;

int main(){
    cout<<"Size of int: "<< sizeof(int) << " bytes"<<endl;
    cout<<"Size of long int: "<< sizeof(long int) << " bytes"<<endl;
    cout<<"Size of short int: "<< sizeof(short int) << " bytes"<<endl;
    cout<<"Size of long long int: "<< sizeof(long long int) << " bytes"<<endl;

    //Signed
    // Can store negative and positive numbers
    signed int a = -10;
    signed int b = 10;

    //Unsigned
    // Can store only positive numbers
    unsigned int c = 10;
    unsigned int d = -10; // Unsigned interprets it as a large positive number.
    
    return 0;

}