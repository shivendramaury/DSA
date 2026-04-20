class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int ans = -1;
        int first=-1, last=-1;

        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(colors[i] != colors[j]){
                    int diff = abs(i-j);
                    ans = max(ans, diff);
                }
            }
        }
        return ans;
    }
};