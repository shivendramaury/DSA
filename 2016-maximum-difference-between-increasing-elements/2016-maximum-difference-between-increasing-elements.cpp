class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        int diff=-1;
        for(int i=0; i<n-1; i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[i]){
                    diff = abs(nums[j]-nums[i]);
                ans = max(ans, diff);
                }
            }
        }
        return ans;
    }
};