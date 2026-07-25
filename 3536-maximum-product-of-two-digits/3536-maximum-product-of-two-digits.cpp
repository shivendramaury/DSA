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
        sort(ans.begin(), ans.end());

        ans1 = ans[m-1]*ans[m-2];
        return ans1;
    }
};