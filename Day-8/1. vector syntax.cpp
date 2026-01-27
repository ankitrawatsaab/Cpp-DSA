#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector <int> vec1; //0
    // cout<<vec1[0];
    
    //initialization
    vector <int> vec2={1,2,3,4,5}; //5 elment
    cout<<vec2[0]<<endl;
    
    //vector of size 5 with all values initialized to 0
    vector<int>vec3(5,0);
    cout<<vec3[0]<<endl;
    cout<<vec3[1]<<endl;
    cout<<vec3[2]<<endl;
    cout<<vec3[3]<<endl;
    cout<<vec3[4]<<endl;
    
    //for each loop in vector
    vector <char> vec4 = {'a', 'b', 'c', 'd', 'e'};
    for(char value : vec4){
        cout<<value<<" ";
    }
    
    return 0;
}