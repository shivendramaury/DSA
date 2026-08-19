class Solution {
public:
    void subSum(vector<int> &candidates, int target, int index, vector<vector<int>> &ans, vector<int> &temp){

        if(target == 0){
            ans.push_back(temp);
            return;
        }

        if(target<0 || index == candidates.size()){
            return;
        }

        subSum(candidates, target, index+1, ans, temp);

        temp.push_back(candidates[index]);
        subSum(candidates, target-candidates[index], index, ans, temp);

        temp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> ans;
        vector<int> temp;

        subSum(candidates, target, 0, ans, temp);
        return ans;
    }
};