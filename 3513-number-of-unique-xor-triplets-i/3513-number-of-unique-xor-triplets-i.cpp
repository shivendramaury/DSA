class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        
        if(n<=2) return n;

        int near = 1;

        while(near <= n){
            near *=2;
        }

        return near;
    }
};