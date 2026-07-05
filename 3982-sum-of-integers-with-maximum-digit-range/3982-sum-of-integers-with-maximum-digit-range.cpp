class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n=nums.size();
        int ans = 0;

        unordered_map<int, int> mpp;

        int diff = 0;
        

        for(int i=0; i<n; i++){
            int mini = INT_MAX;
        int maxi = INT_MIN;
            int temp = nums[i];

            while(temp>9){
                int rem = temp%10;
                mini = min(mini, rem);
                maxi = max(maxi, rem);
                temp/=10;
            }
            mini = min(mini, temp);
            maxi = max(maxi, temp);

            diff = abs(maxi-mini);

            mpp.insert({i, diff});
        }

        int Omax = INT_MIN;

        for(auto &it : mpp){
            Omax = max(Omax, it.second);
        }

        for(auto &it : mpp){
            if(it.second == Omax){
                ans+= nums[it.first];
            }
        }
        return ans;
    }
};