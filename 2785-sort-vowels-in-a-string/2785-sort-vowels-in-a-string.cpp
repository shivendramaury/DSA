class Solution {
public:
    string sortVowels(string s) {
        int n = s.length();
        
        vector<char> lower;

        for(int i=0; i<n; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                lower.push_back(s[i]);
            }
            
        }
        
        sort(lower.begin(), lower.end());

        int j=0;

            for(int i=0; i<n; i++){
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                    s[i] = lower[j];
                    j++;
                }
            
            }
        
        return s;
    }
};