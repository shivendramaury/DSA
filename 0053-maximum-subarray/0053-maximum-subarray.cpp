// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n=nums.size();
//         int curSum= nums[0];
//         int maxSum=nums[0];

//         for(int i=1; i<n; i++){
//             curSum = max(nums[i], curSum+nums[i]);
//             maxSum = max(curSum, maxSum);   
//         }
//         return maxSum;
//     }
// };

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int preSum=0;
        int sum=INT_MIN;
        for(int i=0;i<n;i++){
            preSum+=nums[i];
            sum = max(sum, preSum);

            if(preSum<0){
                preSum=0;
            }
        }
        return sum;
    }
};