class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<int> leftSum;
        vector<int> rightSum;

        int sum=0;
        for(int i=0;i<n;i++){
            leftSum.push_back(sum);
            sum+=nums[i];
        }
        int sum2=0;
        for(int i=n-1;i>=0;i--){
            rightSum.push_back(sum2);
            sum2+=nums[i];
        }

        for(int i=0;i<n;i++){
            ans.push_back(abs(leftSum[i]-rightSum[n-i-1]));
        }
        return ans;
    }
};