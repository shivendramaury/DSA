class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int sum1=0;
        vector<int> preSum(n);
        preSum[0] = nums[0];

        for(int i=1;i<n;i++){
            preSum[i] = preSum[i-1] + nums[i];
        }

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
};