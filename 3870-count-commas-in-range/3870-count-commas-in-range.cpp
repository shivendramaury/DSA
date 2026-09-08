class Solution {
public:
    int countCommas(int n) {


        if(n<1000) return 0;
        long long ans=0;
        for(long long i=1000; i<= n; i++){
            long long digits =0;
            long long x=i;

            while(x){
                digits++;
                x= x/10;
            }
            ans += (digits-1)/3;
        }
        return ans;
    }
};