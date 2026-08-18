class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> mpp;
        int ans = -1;

        for(int i = 0; i <= n-k; i++){
            
            unordered_set<int> st;

            int start = i;
            int end = i+k-1;

            for(int j = start; j <= end; j++){
                
                if(st.find(nums[j]) == st.end()){
                    mpp[nums[j]]++;
                    st.insert(nums[j]);
                }
            }
        }

        for(int i = 0; i < n; i++){
            if(mpp[nums[i]] == 1){
                ans = max(ans, nums[i]);
            }
        }

        return ans;
    }
};