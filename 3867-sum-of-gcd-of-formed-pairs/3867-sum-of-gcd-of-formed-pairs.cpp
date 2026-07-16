class Solution {
public:
    typedef long long ll;
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int maxi= INT_MIN;
        vector<ll> prefixGcd(nums.size());

        for(int i=0; i<n; i++){
            maxi = max(nums[i], maxi);
            prefixGcd[i] = __gcd(maxi, nums[i]);
        }
        sort(prefixGcd.begin(), prefixGcd.end());

        int i=0;
        int j=n-1;
        long long sum=0;
        while(i<j){
            sum += __gcd(prefixGcd[i], prefixGcd[j]);
            i++;
            j--;
        }
        return sum;
    }
};