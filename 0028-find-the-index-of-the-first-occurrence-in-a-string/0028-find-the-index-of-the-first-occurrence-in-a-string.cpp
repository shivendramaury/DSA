class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        

        int ans = -1;

        for(int i=0; i<=n-m; i++){
            int first = i, sec = 0;

            while(sec<m && haystack[first] == needle[sec]){
                first++;
                sec++;
            }
            if(sec == m){
                return i;
            }
        }
        return ans;
    }
};