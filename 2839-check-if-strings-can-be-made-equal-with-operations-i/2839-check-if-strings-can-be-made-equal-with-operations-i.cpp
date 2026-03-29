class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int n1=s1.size();
        for(int i=0; i<2; i++){
            if(s1[i] != s2[i]){
                swap(s1[i], s1[i+2]);
            }
        }
        for(int i=0; i<n1; i++){
            if(s1[i] != s2[i]){
                return false;
            }
        }
        return true;
    }
};