class Solution {
public:
    int mySqrt(int x) {
        int start=0;
        int end=x;
        int ans=0;
        if(x==0) return 0;
        while(start<=end){
            long long mid=(start+end)/2;
            if(mid*mid==x) {
                ans=mid;
                break;
            }
            else if(mid*mid<x){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};