class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, int> count;
        
        vector<int> ans;
        for(int i=0;i<n; i++){
            count[nums[i]]++;
            if(count[nums[i]]<=k){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};