class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // Code here
        int n=mat.size();
        int m=mat[0].size();
        
        for(int i=0; i<n; i++){
            int left=0, right=m-1;
            while(left<right){
                swap(mat[i][left], mat[i][right]);
                left++;
                right--;
            }
        }
        
        
        
        for(int j=0; j<m; j++){
            int top=0, bottom=n-1;
            while(top<bottom){
                swap(mat[top][j], mat[bottom][j]);
                top++;
                bottom--;
            }
        }
    }
};