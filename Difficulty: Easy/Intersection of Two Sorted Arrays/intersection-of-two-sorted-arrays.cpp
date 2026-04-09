class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        
        set<int> st1;
        set<int> st2;
        for(int i=0; i<a.size(); i++){
            st1.insert(a[i]);
        }
        for(int i=0; i<b.size(); i++){
            st2.insert(b[i]);
        }
        vector<int> ans;
        
        for(auto it: st1){
            if(st2.count(it)){
                ans.push_back(it);
            }
        }
        return ans;
    }
};