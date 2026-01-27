#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector <char> vec = {'a', 'b', 'c', 'd', 'e'};
    
    //size function
    cout<<"size : " << vec.size()<<endl;
    
    //push_back function
    vec.push_back('f');
    cout<<"add elment from last using push_back function"<<endl;
    cout<<"size : " << vec.size()<<endl;
    
    //pop_back function
    vec.pop_back();
    cout<<"remove one elment from last using pop_back function"<<endl;
    cout<<"size : " << vec.size()<<endl;
    
    //front function
    cout<<vec.front()<<endl;
    
    //back function
    cout<<vec.back()<<endl;
    
    //at function
    cout<<vec.at(2);

    return 0;
}