class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int count0=0;
        int lastCount=0;

        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                count0++;
            }
        }
        for(int i=n-1;i>=n-count0;i--){
            if(nums[i] == 0){
                lastCount++;
            }
        }
        return count0-lastCount;
    }
};