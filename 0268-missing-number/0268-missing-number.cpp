class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();

        int oriSum=0;

        for(int i=0; i<n;i++){
            oriSum += nums[i];
        }
        int eSum= (n*(n+1))/2;

        return eSum-oriSum;
    }
};