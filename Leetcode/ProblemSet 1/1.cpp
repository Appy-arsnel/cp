#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int dp[nums.size()+1][target+1];
        vector<int> sol; 

        

        for(int i=0; i<n+1; i++)
        for(int j=0; j<target+1; j++){
            if(i==0||j==0)
            dp[i][j]==0;

            if(j>=nums.at(i-1)){
                dp[i][j] = dp[i-1][j-nums.at(i-1)]||dp[i-1][j];

            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }

        for(int i=0; i<n+1; i++){
        for(int j=0; j<target+1; j++){
            cout<<dp[i][j]<<"\t";
        }
        cout<<endl;
        }
        return sol;

    }
};

int main(){

    
    Solution s;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    
    vector<int> solution = s.twoSum(nums,target);

    for(auto sol: solution)
    cout<<sol<<" ";
    return 0;

}