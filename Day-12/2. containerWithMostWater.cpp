#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//using two pointer approach
int maxArea (vector <int> height){
    int mostWater = 0;
    int n = height.size();
    int i=0, j=n-1;
    while(i<j){
        int w = j-i;
        int h = min(height[i], height[j]);
        int currentWater = w * h;
        mostWater = max(currentWater , mostWater);
        
        if(height[i]<height[j]){
            i++;
        }else{
            j--;
        }
    }
    return mostWater;
}
int main() {
     vector <int> height = {1,8,6,2,5,4,8,3,7};
     cout<< "most water in the container is : "<<maxArea(height);
    return 0;
}