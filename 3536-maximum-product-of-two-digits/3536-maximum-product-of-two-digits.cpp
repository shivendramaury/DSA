class Solution {
public:
    int maxProduct(int num) {
        int n = num;
        int ans1= 0;
        vector<int> ans;

        while(n>9){
            int rem = n%10;
            ans.push_back(rem);
            n/=10;
        }
        ans.push_back(n);

        int m = ans.size();
        for(int i=0;i<m;i++){
            for(int j=i+1;j<m; j++){
                ans1 = max(ans1, ans[i]*ans[j]);
            }
        }
        return ans1;
    }
};