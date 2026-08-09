class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();

        vector<int> alpha(26, 0);

        for(int i=0; i<n; i++){
            alpha[sentence[i]-'a'] = 1;
        }

        for(int i=0; i<26; i++){
            if(alpha[i] == 0){
                return false;
            }
        }
        return true;
    }
};