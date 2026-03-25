class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        long long sum=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                sum+= grid[i][j];
            }
        }
        if(sum%2!=0) return false;
        long long preSum=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                preSum += grid[i][j];
            }
            if(preSum == sum/2) return true;
        }
        long long upRow=0;
        for(int j=0;j<m;j++){
            for(int i=0; i<n; i++){
                upRow += grid[i][j];
            }
            if(upRow == sum/2) return true;
        }
        return false;
    }
};