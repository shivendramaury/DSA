class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=0, sell = 1;
        int profit = 0;
        if(n<2){
            return 0;
        }
        else{ 
        for(int i=0;i<n;i++){
            while(sell<n){
                if(prices[sell]>prices[buy]){
                int diff = prices[sell] - prices[buy];
                profit = max(profit, diff);
            }
            else{
                buy = sell;
            }
            sell++;
        }
            }
        }
        return profit;
    }
};