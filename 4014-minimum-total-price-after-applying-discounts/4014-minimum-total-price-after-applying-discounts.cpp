class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int n=prices.size();
        int m=discounts.size();
        double temp = 0;

        double ans=0;
        sort(prices.begin(), prices.end(), greater<int>());
        sort(discounts.begin(), discounts.end(), greater<int>());

        for(int i=0; i<n; i++){
            if(i<m){
                double t1 = 100-discounts[i];
                double t2 = t1/100;
                temp = (prices[i]*t2);
                ans += temp;
                temp = 0;
            }
            else
                ans += prices[i];
        }
        return ans;
    }
};