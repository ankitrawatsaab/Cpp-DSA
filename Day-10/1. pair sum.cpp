// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach
vector <int> pairSum(vector <int> nums, int target){
    vector <int> ans;
    int n = nums.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main(){
    vector <int> nums = {2,7,11,15};
    int target = 9;
    vector <int> ans =  pairSum(nums, target);
    cout<<ans[0]<<endl;
    cout<<ans[1]<<endl;
    
    return 0;
}
