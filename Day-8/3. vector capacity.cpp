#include <iostream>
using namespace std;
#include <vector>

int main(){
    //vector capacity function
    vector <int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    cout<<"size of vector : "<<vec.size()<<endl;
    cout<<"capacity of vector : "<<vec.capacity()<<endl;
    return 0;
}