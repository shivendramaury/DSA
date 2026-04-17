class Solution {
public:
    int reverse(int n){
        int rev = 0;

        while(n>0){
            int rem = n%10;

            rev = rev*10 + rem;
            n/=10;
        }
        return rev;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        int n=nums.size();
        int ans = INT_MAX;
        unordered_map<int, int> mp;

        for(int i=0; i<n; i++){
            if(mp.count(nums[i])){
                ans = min(ans, abs(i-mp[nums[i]]));
            }

            mp[reverse(nums[i])] = i;
        }
        if(ans == INT_MAX) return -1;
        else return ans;
    }
};