class Solution {
  public:
    string URLify(string &s) {
        // code here
        int n=s.size();
        string st= "";
        
        for(int i=0; i<n; i++){
            if(s[i] == ' '){
                st.push_back('%');
                st.push_back('2');
                st.push_back('0');
            }
            else{
                st.push_back(s[i]);
            }
        }
        // st.push_back('%');
        //         st.push_back('2');
        //         st.push_back('0');
        return st;
    }
};