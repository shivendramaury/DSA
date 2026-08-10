class Solution {
public:
    bool isalpha(char a){
        if(a-'0'>=1 && a-'0'<=9){
            return true;
        }
        else{
            return false;
        }
    }
    string sortSentence(string s) {
        int n = s.length();
        
        int dig;
        vector<string> str1(10);
        string word;
        for(int i=0; i<n; i++){
            
            if(!isalpha(s[i]) && s[i] != ' '){
                word+=s[i];
            }
            
            if(s[i] == ' '){
                dig = s[i-1]-'0';
                str1[dig-1] = word;
                word = "";
            }
        }

        dig = s[n-1] - '0';
        str1[dig-1] = word;

        string ans= "";
        
        for(int i=0; i<10; i++){
            if(str1[i] != ""){
                ans += str1[i] + " ";
            }
        }
        ans.pop_back();
        return ans;
    }
};