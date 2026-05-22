class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        int curr = 0;

        for(int i=0;i<n;i++){
            curr += nums[i];
            if(curr <nums[i]){
                curr = max(curr, nums[i]);             
            }   
            sum = max(sum, curr); 
        }
        return sum;
    }
};