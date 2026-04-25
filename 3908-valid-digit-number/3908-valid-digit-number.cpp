class Solution {
public:
    bool validDigit(int n, int x) {
        int num=n;
        while(num>=10) num/=10;
        if(num == x) return false;

        while(n>0){
            int rem = n%10;
            if(rem == x) return true;
            n/=10;
        }
        return false;
    }
};