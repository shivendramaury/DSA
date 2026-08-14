class Solution {
public:
    int maximumLengthSubstring(string s) {

        int n = s.size();
        int left = 0;
        int si=0;

        unordered_map<int, int> mp;

        for(int i=0; i<n; i++){
            mp[s[i]]++;

            while(mp[s[i]] > 2){
                mp[s[left]]--;
                left++;
            }
            si = max(si, i-left+1);
        }
        return si;
    }
};