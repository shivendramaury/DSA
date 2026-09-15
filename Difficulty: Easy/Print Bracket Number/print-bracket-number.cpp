class Solution {
  public:

    vector<int> bracketNumbers(string &s) {
        int n = s.length();
        stack<int> st;
        int count=0;
        vector<int> ans;
        
        for(int i=0; i<n; i++){
            if(s[i] == '('){
                count++;
                st.push(count);
                ans.push_back(count);
            }
            else if(s[i] == ')'){
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
    }
};