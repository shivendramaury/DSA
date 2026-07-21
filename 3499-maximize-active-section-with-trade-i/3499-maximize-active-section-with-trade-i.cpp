class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.length();
        int count = 0;
        vector<int> cntZero;
        int cntOne = 0;
        for(int i=0;i<n;i++){
            if(s[i] =='1'){
                cntOne++;
            }
        }

        int i=0;
        while(i<n){
            if(s[i] == '0'){
                int start = i;
                while(i<n && s[i] == '0') i++;
                cntZero.push_back(i-start);
            }
            else{
                i++;
            }
        }
        for(int i=1;i<cntZero.size(); i++){
            count = max(count, cntZero[i] + cntZero[i-1]);
        }
        return count + cntOne;
    }
};