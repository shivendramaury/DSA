class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;
        int left=0, right=m-1, top=0, down=n-1;

        while(left<=right && top<=down){
            for(int i=left; i<=right; i++){
                ans.push_back(matrix[top][i]);
            }
            // left++;
            top++;
            for(int j=top; j<=down; j++){
                ans.push_back(matrix[j][right]);
            }
            right--;
            // down++;
            if(top<=down){
                for(int k= right; k>=left; k--){
                ans.push_back(matrix[down][k]);
            }
            down--;
            }
            if(left<=right){
                for(int l = down; l>=top; l--){
                ans.push_back(matrix[l][left]);
            }
            left++;
            }
        }
        return ans;
    }
};