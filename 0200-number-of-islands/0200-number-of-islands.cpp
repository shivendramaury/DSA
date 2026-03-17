class Solution {
public:
    bool isSafe(int i, int j, vector<vector<int>> &vis, vector<vector<char>> &grid){
        int n=grid.size();
        int m=grid[0].size();
        if(i>=0 && i<n && j>=0 && j<m && vis[i][j] == 0 && grid[i][j] == '1'){
            return true;
        }
        return false;
    }

    void dfs(int i, int j, vector<vector<int>> &vis, vector<vector<char>> &grid){
        vis[i][j] = 1;

        if(isSafe(i+1, j, vis, grid)){
            dfs(i+1, j, vis, grid);
        }
        if(isSafe(i, j+1, vis, grid)){
            dfs(i, j+1, vis, grid);
        }
        if(isSafe(i-1, j, vis, grid)){
            dfs(i-1, j, vis, grid);
        }
        if(isSafe(i, j-1, vis, grid)){
            dfs(i, j-1, vis, grid);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<int>> vis(n, vector<int> (m, 0));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(vis[i][j] == 0 && grid[i][j] == '1'){
                    dfs(i, j, vis, grid);
                    count++;
                }
            }
        }
        return count;
    }
};