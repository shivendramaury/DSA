class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();

        // BRUTE FORCE APPROACH

        // for(int i=0;i<n-1; i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j] == target){
        //             return {i, j};
        //         }
        //     }
        // }
        // return {-1, -1};

        // OPTIMAL APPROACH

        unordered_map<int, int> mp;

        for(int i=0;i<n;i++){
            int comp = target - nums[i];

            if(mp.find(comp) != mp.end()){
                return {mp[comp], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};