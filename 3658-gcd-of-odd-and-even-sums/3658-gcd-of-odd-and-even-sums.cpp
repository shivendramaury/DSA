class Solution {
public:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a%b);
    }
    int gcdOfOddEvenSums(int n) {
        int sumOdd=0;
        int sumEven=0;

        for(int i=0; i<2*n;i++){
            if(i%2 == 0){
                sumOdd+=i;
            }
            else{
                sumEven+=i;
            }
        }
        return gcd(sumOdd, sumEven);
    }
};