class Solution {
  public:
    string substring(string &s, int l, int r) {
        string str;
        
        for(int i=l; i<=r; i++){
            str += s[i];
        }
        return str;
    }
};