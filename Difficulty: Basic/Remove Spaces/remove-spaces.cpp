class Solution {
  public:
    string removeSpaces(string& s) {
        int n=s.size();
        string st="";
        
        for(int i=0; i<n; i++){
            if(s[i] == ' '){
                continue;
            }
            else{
                st.push_back(s[i]);
            }
        }
        return st;
    }
};