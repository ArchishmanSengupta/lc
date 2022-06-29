class Solution {
public:
    int maxProfit(vector<int>& prices) {     
           int profit = INT_MAX;
            int ans =0;
            
            int n = prices.size();
            for(int i=0;i<n;i++){
                    if(prices[i]<profit){
                            profit = prices[i];
                    }
                    else if(prices[i] -profit>ans){
                            ans = prices[i]-profit;
                    }
            }
            return ans;
    }
};