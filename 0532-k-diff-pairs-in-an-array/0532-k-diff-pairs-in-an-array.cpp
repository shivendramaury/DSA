class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        int start=0, end=n-1;
        int count=0;
        set<pair<int, int>> st;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(abs(nums[i]-nums[j]) == k){
                    int a= min(nums[i], nums[j]);
                    int b= max(nums[i], nums[j]);

                    if(st.find({a,b}) == st.end()){
                        st.insert({a, b});
                        count++;
                    }
                }
            }
        }
        return count;
    }
};