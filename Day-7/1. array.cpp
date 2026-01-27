#include <iostream>
using namespace std;

int main() {
    int marks[5] = {90, 85, 74, 88, 69};   // size fixed

    marks[0]=100;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    
    // 0 to n-1
    cout<<marks[-1];// garbage value
    return 0;
}
