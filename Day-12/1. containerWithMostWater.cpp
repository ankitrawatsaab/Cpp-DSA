// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//using brute force approach
int maxArea (vector <int> height){
    int mostWater = 0;
    int n = height.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            int w = j-i;
            int h = min(height[i], height[j]);
            
            int currentWater = w * h;
            mostWater = max(currentWater , mostWater);
        }
    }
    return mostWater;
}
int main() {
     vector <int> height = {1,8,6,2,5,4,8,3,7};
     cout<< "most water in the container is : "<<maxArea(height);
    return 0;
}