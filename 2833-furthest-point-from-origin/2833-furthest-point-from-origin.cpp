class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.size();
        int leftCount=0;
        int rightCount=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='L'){
                leftCount++;
            }
            if(moves[i] == 'R'){
                rightCount++;
            }
        }
        int maxi = max(leftCount, rightCount);
        string fin = "";
        int lc=0,rc=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='L'){
                fin.push_back('L');
                lc++;
            }
            else if(moves[i]=='R'){
                fin.push_back('R');
                rc++;
            }
            else{
                if(leftCount>=rightCount){
                    fin.push_back('L');
                    lc++;
                }
                else{
                    fin.push_back('R');
                    rc++;
                }
            }
        }
        int m = fin.size();
        return abs(lc-rc);
    }
};