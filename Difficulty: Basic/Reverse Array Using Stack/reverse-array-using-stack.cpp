class Solution {
  public:
    void reverseArray(vector<int>& arr) {
        int n = arr.size();
        stack<char> st;
        
        for(int i=0; i<n; i++){
            st.push(arr[i]);
        }
        int i=0;
        while(!st.empty()){
            arr[i] = st.top();
            i++;
            st.pop();
        }
    }
};