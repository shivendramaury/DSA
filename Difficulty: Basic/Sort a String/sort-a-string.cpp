class Solution {
  public:
    string sortString(string &s) {
        int freq[26] = {0};
        
        for(char ch : s){
            freq[ch-'a']++;
        }
        int k = 0;
        
        for(int i=0; i<26; i++){
            while(freq[i] > 0){
                s[k] = 'a' + i;
                k++;
                freq[i]--;
            }
        }
        return s;
    }
};