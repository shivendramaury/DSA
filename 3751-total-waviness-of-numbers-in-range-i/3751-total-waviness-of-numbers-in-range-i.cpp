class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count=0;
        for(int i=num1; i<=num2; i++){
            string dig = to_string(i);
            if(dig.size()>=3){
                for(int j=1;j<dig.size()-1; j++){
                    if((dig[j-1]<dig[j] && dig[j+1]<dig[j]) || (dig[j-1]>dig[j] && dig[j+1]>dig[j])){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};