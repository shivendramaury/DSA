class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        sort(nums.begin(), nums.end());

        // for(int i=0; i<n-1; i++){
        //     if()
        // }


        int start = nums[0];
        int end = nums[n-1];
        int i = start;
        int idx=0;
        while(i!=end){
            if(nums[idx] != start){
                ans.push_back(start);
                start++;
                i++;
            }
            else{
                start++;
                idx++;
                i++;
            }
        }
        return ans;
    }
};