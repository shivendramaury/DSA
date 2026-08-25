class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> st;
        int ans = 0;

        for(int i = 0; i <n; i++){
            st.insert(nums[i]);
        }

        for(int i=1; i<=n+1; i++){
            if(st.find(k*i) == st.end()){
                ans = k*i;
                break;
            }
        }
        return ans;
    }
};