class Solution {
  public:
    bool subSet(vector<int> &arr, int index, int n, int sum, int target, vector<vector<int>>& dp){
        if(sum == target){
            return true;
        }
        
        if(index == n || sum>target){
            return false;
        }
        
        if(dp[index][sum] != -1){
            return dp[index][sum];
        }
        
        bool notTake = subSet(arr, index+1, n, sum, target, dp);
        bool take = subSet(arr, index+1, n, sum+arr[index], target, dp);
        
        return dp[index][sum] = take || notTake;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(sum+1, -1));
        
        return subSet(arr, 0, n, 0, sum, dp);
    }
};