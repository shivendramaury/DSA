class Solution {
public:
    void sub(vector<int> nums, int index, int n, vector<vector<int>> &ans, vector<int> temp)
    {
        if(index == n){
            ans.push_back(temp);
            return;
        }

        sub(nums, index+1, n, ans, temp);

        temp.push_back(nums[index]);
        sub(nums, index+1, n, ans, temp);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> temp;

        sub(nums, 0, n, ans, temp);
        return ans;
    }
};