class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int ans = INT_MAX;

        for(int i=0;i<n;i++){
            int sum = 0;
            int d = nums[i];
            while(d>9){
                int s = d%10;
                sum+=s;
                d/=10;
            }
            sum+=d;
            ans = min(ans, sum);
        }
        return ans;
    }
};