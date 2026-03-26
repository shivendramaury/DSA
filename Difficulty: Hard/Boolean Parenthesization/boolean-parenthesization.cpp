// User function Template for C++
class Solution {
  public:
  
    long long f(int i, int j, int isTrue, string &s, vector<vector<vector<long long>>>
        & dp){
        if(i>j) return 0;
        if(i==j){
            if(isTrue){
                return s[i] == 'T';
            }
            else return s[i] == 'F';
        }
        long long ways = 0;
        if(dp[i][j][isTrue] != -1) return dp[i][j][isTrue];
        
        for(int ind=i+1; ind<=j-1; ind+=2){
            long long lT = f(i, ind-1, 1, s, dp);
            long long lF = f(i, ind-1, 0, s, dp);
            long long rT = f(ind+1, j, 1, s, dp);
            long long rF = f(ind+1, j, 0, s, dp);
            
            if(s[ind] == '&'){
                if(isTrue) ways = (ways + (rT*lT));
                else ways = ways+ (rT*lF) + (rF*lT) + (rF*lF);
            }
            
            else if(s[ind] == '|'){
                if(isTrue){
                    ways = ways+ (lT*rT) + (lT*rF) + (lF*rT);
                }
                else
                    ways += (lF*rF);
            }
            else{
                if(isTrue){
                    ways = ways + (lT*rF) + (lF*rT);
                }
                else{
                    ways = ways+(lT*rT) + (lF*rF);
                }
            }
        }
        return dp[i][j][isTrue] = ways;
    }
    int countWays(string &s) {
        int n=s.size();
        vector<vector<vector<long long>>>
        dp(n, vector<vector<long long>> (n, vector<long long> (2, -1)));
        return f(0, n-1, 1, s, dp);
        
    }
};