class Solution {
public:
        int profit(vector<int>& prices, int i, int n, int k, int holding, vector<vector<vector<int>>> &dp){
                
                if(i>=n) return 0;
                if(k==0) return 0;
                
                if(dp[i][k][holding] !=-1) return dp[i][k][holding];
                
                int doNothing = profit(prices, i+1,n,k,holding,dp);
                
                if(holding == 0){
                        //holding = 1;
                      int buy = profit(prices,i+1,n,k,1,dp) - prices[i]; 
                        return dp[i][k][holding] = max(buy,doNothing);
                }
                else
                {
                        // holding = 0;
                        int sell = profit(prices, i+1,n,k-1,0,dp) + prices[i]; 
                        return dp[i][k][holding] = max(sell,doNothing);
                }   
                
        }
    int maxProfit(int k, vector<int>& prices) {
        int profit1 = INT_MAX;
            int n = size(prices);
            int i=0;
            bool holding=0;
            // k=k*2;
            
            vector<vector<vector<int>>> dp(n,vector<vector<int>>(k+1,vector<int>(2,-1)));
            return profit(prices,i,n,k,holding,dp);
            
    }
};