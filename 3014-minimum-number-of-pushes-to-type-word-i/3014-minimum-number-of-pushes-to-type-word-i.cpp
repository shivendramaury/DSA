class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int ans=0;
        if(n>=24){
            ans += 8;
            ans += 16;
            ans += 24;
            ans += 4*(n-24);
        }
        else if(n>=16){
            ans += 8;
            ans += 16;
            ans += 3*(n-16);
        }
        else if(n >=8){
            ans += 8;
            ans += 2*(n-8);
        }
        else{
            ans += n;
        }
        return ans;
    }
};