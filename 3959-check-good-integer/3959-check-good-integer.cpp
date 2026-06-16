class Solution {
public:
    bool checkGoodInteger(int num) {
        int n=num;
        int sum=0;
        int sqSum=0;

        while(n>=9){
            int dig = n%10;
            int sq = dig*dig;
            sum+=dig;
            sqSum += sq;
            n/=10;
        }
        sum+=n;
        sqSum += (n*n);
        
        int diff = sqSum-sum;
        if(diff>=50){
            return true;
        }
        else
            return false;
    }
};