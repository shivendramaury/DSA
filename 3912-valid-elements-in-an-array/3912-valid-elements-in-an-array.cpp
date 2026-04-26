class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return nums;
        vector<int> ans;
        vector<int> pre(n);
        vector<int> post(n);

        pre[0] = nums[0];
        for(int i=1; i<n; i++){
            pre[i] = max(pre[i-1], nums[i]);
        }

        post[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--){
            post[i] = max(post[i+1], nums[i]);
        }
        ans.push_back(nums[0]);
        for(int i=1; i<n-1; i++){
            if(nums[i]>pre[i-1] || nums[i]>post[i+1]){
                ans.push_back(nums[i]);
            }
        }
        ans.push_back(nums[n-1]);
        return ans;
    }
};