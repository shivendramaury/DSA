class Solution {
public:
    bool isPalindrome(string s) {
        string word;
        int n=s.length();

        for(int i=0;i<n;i++){
            if(!isalnum(s[i])){
                continue;
            }
            else{
                word.push_back(s[i]);
            }
        }

        transform(word.begin(), word.end(), word.begin(), :: tolower);

        int m=word.size();

        int start = 0;
        int end = word.size()-1;

        while(start<end){
            if(word[start] != word[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};