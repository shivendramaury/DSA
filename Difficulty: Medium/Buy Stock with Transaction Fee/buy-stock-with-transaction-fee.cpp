class Solution {
  public:
    int f(int ind, int buy, vector<int>& arr, int k, vector<vector<int>> &dp){
        if(ind == arr.size()) return 0;
        if(dp[ind][buy] != -1) return dp[ind][buy];
        if(buy == 1){
            return dp[ind][buy] = max((-arr[ind]+f(ind+1, 0, arr, k, dp)), 0+f(ind+1, 1, arr, k, dp));
        }
        
        else{
            return dp[ind][buy] = max((arr[ind]-k+f(ind+1, 1, arr, k, dp)), 0+f(ind+1, 0, arr, k, dp));
        }
    }
    int maxProfit(vector<int>& arr, int k) {
        int n=arr.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));
        return f(0, 1, arr, k, dp);
    }
};