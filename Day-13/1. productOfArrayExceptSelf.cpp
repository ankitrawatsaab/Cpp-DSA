// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

//using brute force approach
vector <int> productExceptSelf (vector <int> nums){
    int n = nums.size();
    vector<int>ans (n,1); // [1, 1, 1, 1, 1]
    
    for(int i =0; i<n;i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                ans[i] *= nums[j];
            }
            
        }
    }
    return ans;
}
int main() {
     vector<int>nums ={1,2,3,4};
     vector<int> res = productExceptSelf(nums);
     
    for(int value : res){
    cout<<value<<" ";
    }
    return 0;
}