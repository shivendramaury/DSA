class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();

        bool allZero = true;

        int allXor = 0;

        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                allZero = false;
            }

            allXor = (allXor^nums[i]);
        }

        if(allZero){
            return 0;
        }

        if(allXor == 0){
            return n-1;
        }
        else{
            return n;
        }
    }
};