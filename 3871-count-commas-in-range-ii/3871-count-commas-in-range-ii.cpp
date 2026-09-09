class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        long long ans=0;
        long long start=1000;
        int comm = 1;

        while(start <= n){
            long long end = min(n, start*1000-1);
            long long num = end-start +1;

            ans = ans+ num*comm;

            start*=1000;
            comm++;
        } 
        return ans;
    }
};