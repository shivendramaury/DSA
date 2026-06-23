class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        vector<vector<int>> store;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    store.push_back({i, j});
                }
            }
        }
        int s = store.size();

        for(int k =0; k<s; k++){
            int r = store[k][0];
            int c = store[k][1];

            for(int i=0;i<n;i++){
                matrix[i][c] = 0;
            }
            for(int j=0; j<m; j++){
                matrix[r][j] = 0;
            }
        }
    }
};