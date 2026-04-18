class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n=s.size();
        int count=0;
        
        for(int i=n-1; i>=0; i--){
            if(s[i] != ' '){
                while(i>=0 && s[i] != ' '){
                    count++;
                    i--;
                }
                break;
            }
        }
        
        return count;
    }
};