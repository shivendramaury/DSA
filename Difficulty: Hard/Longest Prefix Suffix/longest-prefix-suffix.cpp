class Solution {
  public:
    int getLPSLength(string &s) {
        
        int n = s.size();
        
        int p=0, su=1, pos=1, count=0;
        
        while(p<n && su<n){
            if(s[p] == s[su]){
                p++;
                su++;
                count++;
            }
            else{
                p = 0;
                pos++;
                su=pos;
                count=0;
            }
        }
        return count;
    }
};