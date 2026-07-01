class Solution {
public:
    bool isAnagram(string s, string t) {
        string str1;
        sort(s.begin(), s.end());
        str1 = s;

        string str2;

        sort(t.begin(), t.end());
        str2 = t;

        if(str1 == str2) return true;
        else return false;
    }
};