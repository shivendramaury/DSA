class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> mpp;
        int len=0;
        int start=0, end=0;

        while(end<n){
            mpp[nums[end]]++;

            if(mpp.find(nums[end]) != mpp.end()){
                
                while(mpp[nums[end]]>k){
                    mpp[nums[start]]--;
                    start++;
                }
            }
            len = max(len, end-start+1);
            end++;
            
        }
        return len;
    }
};