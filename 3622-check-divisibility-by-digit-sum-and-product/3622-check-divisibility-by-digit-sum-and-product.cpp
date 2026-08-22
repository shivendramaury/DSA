class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pro = 1;

        int num=n;

        while(num>9){
            int rem = num%10;
            sum += rem;
            pro *= rem;
            num/=10;
        }
        sum += num;
        pro *= num;

        int tot = sum+pro;

        if(n%tot == 0) return true;
        else return false;
    }
};