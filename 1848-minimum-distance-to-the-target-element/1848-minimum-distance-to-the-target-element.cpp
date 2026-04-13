class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n=nums.size();
        int tar=-1;
        int ans=INT_MAX;
        
        for(int i=0; i<n; i++){
            if(nums[i] == target) {
                tar= i;
                ans = min(ans, abs(tar-start));
            }
        }
        return ans;
    }
};