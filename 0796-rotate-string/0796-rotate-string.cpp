class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = goal.size();

        if(s.length() != goal.length()) return false;

        string douS = s+s;

        return douS.find(goal) != string::npos;
    }
};