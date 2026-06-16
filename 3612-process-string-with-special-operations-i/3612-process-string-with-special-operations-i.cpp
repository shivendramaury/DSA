class Solution {
public:
    string processStr(string s) {
        int n=s.size();
        string ans;
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                ans.push_back(s[i]);
            }
            else if(s[i] == '#'){
                ans.insert(ans.end(), ans.begin(), ans.end());
            }
            else if(s[i] == '%'){
                reverse(ans.begin(), ans.end());
            }
            else{
                if(!ans.empty()){
                    ans.pop_back();
                }
            }
        }
        return ans;
    }
};