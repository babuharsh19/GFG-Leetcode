class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int curr_value=prices[0];
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]<curr_value){
                curr_value=prices[i];
            }
            max_profit=max(max_profit,prices[i+1]-curr_value);
        }
        return max_profit;
    }
};