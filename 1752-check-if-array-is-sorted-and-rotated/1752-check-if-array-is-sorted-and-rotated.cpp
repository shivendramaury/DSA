class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int counter=0;
        for(int i=0; i<n-1; i++){
            if(nums[i]>nums[i+1]){
                counter++;
            }
        }
        if(nums[n-1]>nums[0] && counter<1){
            return true;
        }
        if(counter<=1 && nums[n-1]<=nums[0]) return true;
        else return false;
    }
};