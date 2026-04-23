class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%2!=0) return false;
        
        int tar = sum/2;
        
        int preSum=0;
        
        for(int i=0;i<n;i++){
            preSum+=arr[i];
            if(preSum == tar){
                return true;
            }
        }
        return false;
    }
};
