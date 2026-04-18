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
    int mirrorDistance(int n) {
        int a = reverse(n);
        int ans = abs(a-n);
        return ans;
    }
};