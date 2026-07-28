class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length();
        int mid = n/2;
        sort(s.begin(), s.begin()+mid);

        int start = 0;
        int end = n-1;

        while(start<end){
            s[end] = s[start];
            start++;
            end--;
        }
        return s;
    }
};