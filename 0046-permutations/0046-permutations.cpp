class Solution {
public:
    void per(vector<vector<int>>& ans, vector<int> &nums, int index){
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i= index; i<nums.size(); i++){
            swap(nums[index], nums[i]);
            per(ans, nums, index+1);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;

        per(ans, nums, 0);
        return ans;
    }
};