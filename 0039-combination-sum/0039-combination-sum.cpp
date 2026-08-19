class Solution {
public:
    void subSum(vector<int> &candidates, int index, int n, int target, vector<int> &temp, vector<vector<int>> &ans){

        if(target == 0){
            ans.push_back(temp);
            return;
        }

        if(index == n || target<0){
            return;
        }

        subSum(candidates, index+1, n, target, temp, ans);
        temp.push_back(candidates[index]);
        subSum(candidates, index, n, target-candidates[index], temp, ans);

        temp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int> temp;
        vector<vector<int>> ans;

        subSum(candidates, 0, n, target, temp, ans);
        return ans;
    }
};