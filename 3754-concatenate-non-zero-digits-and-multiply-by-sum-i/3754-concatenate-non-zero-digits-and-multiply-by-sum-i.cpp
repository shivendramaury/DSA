class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans=0;
        int newN=n;

        int val=0;
        int i=0;

        while(n>9){
            int rem = n%10;
            
            if(rem!=0){
                val+= rem* pow(10,i);
                i++;
            }
            n/=10;
        }
        val+=n* pow(10, i);


        int rev =0 ;
        int j=0;
        while(val>9){
            int rem = val%10;
            rev+= rem*pow(10, j);
            val/=10;
            j++;
        }
        rev += val* pow(10,j);

        long long sum = 0;
        int sumVal = 0;

        while(newN>9){
            sum += newN%10;
            newN/=10;
        }
        sum+=newN;

        ans = rev*sum;
        return ans;
    }
};