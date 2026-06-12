class Solution {
public:
    string reverseVowels(string s) {
        int n=s.length();
        int start=0;
        int end=0;
        vector<int> Vowels;

        for(int start=0; start<n;start++){
            if(s[start]=='a' || s[start] == 'e' || s[start] == 'i' || s[start] == 'o' || s[start] == 'u' || s[start]=='A' || s[start] == 'E' || s[start] == 'I' || s[start] == 'O' || s[start] == 'U'){
                Vowels.push_back(s[start]);
            }
        }
        int v=Vowels.size();
        reverse(Vowels.begin(), Vowels.end());
        int vo=0; 

        for(int start=0; start<n;start++){
            if(s[start]=='a' || s[start] == 'e' || s[start] == 'i' || s[start] == 'o' || s[start] == 'u' || s[start]=='A' || s[start] == 'E' || s[start] == 'I' || s[start] == 'O' || s[start] == 'U'){
                s[start] = Vowels[vo];
                vo++;
            }
        }
        return s;
    }
};