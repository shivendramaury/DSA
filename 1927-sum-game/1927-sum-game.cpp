class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int leftKnownSum = 0;
        int leftQus = 0;
        int rightKnownSum = 0;
        int rightQus = 0;

        for(int i=0; i<n/2; i++){
            if(num[i] == '?'){
                leftQus++;
            }
            else{
                leftKnownSum += num[i]-'0';
            }
        }
        for(int i=n/2; i<n; i++){
            if(num[i] == '?'){
                rightQus++;
            }
            else{
                rightKnownSum += num[i]-'0';
            }
        }

        int totalQus = leftQus + rightQus;

        if(totalQus % 2 == 1){
            return true;
        }

        int left = (2*leftKnownSum) + 9*leftQus;
        int right = 2*rightKnownSum + 9*rightQus;

        if(left == right) return false;
        else return true;
    }
};