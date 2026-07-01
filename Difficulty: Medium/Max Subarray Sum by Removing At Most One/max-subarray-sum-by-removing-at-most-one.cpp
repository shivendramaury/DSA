class Solution {
  public:
    int maxSumSubarray(vector<int>& arr) {
        int n=arr.size();
        vector<int> preSum(n);
        vector<int> sufSum(n);
        int pre = 0;
        int suf=0;
        int s = 0;
        
        preSum[0] = arr[0];
        
        for(int i=1;i<n;i++){
            preSum[i] = max(arr[i], preSum[i-1]+arr[i]);
        }
        
        sufSum[n-1] = arr[n-1];
        
        for(int j=n-2; j>=0; j--){
            sufSum[j] = max(sufSum[j+1]+arr[j], arr[j]);
        }
        
        int ans = *max_element(preSum.begin(), preSum.end());
        
        for(int i=1; i<n-1; i++){
            s = preSum[i-1]+sufSum[i+1];
            ans = max(ans, s);
        }
        return ans;
    }
};