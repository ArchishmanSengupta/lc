class Solution{
  public:
        
        int profit(vector<int>&prices, int i, int n, int k, vector<vector<vector<int>>>&dp,int holding){
                if(i>=n) return 0;
                if(k==0) return 0;
                if(dp[i][k][holding] !=-1) return dp[i][k][holding];
                
        int doNothing = profit(prices, i+1, n, k, dp,holding);
                
                if(holding == 0){
                        int buy = profit(prices, i+1, n, k,dp,1) - prices[i];
                        return dp[i][k][holding] = max(buy,doNothing);
                }
        else{
                int sell = profit(prices, i+1,n,k-1, dp,0) + prices[i];
                return dp[i][k][holding] = max(sell, doNothing);
        }
        }
        int maxProfit(int k, vector<int>&prices){
                int n = size(prices);
                int i = 0;
                int holding =0;
                vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(k+1,vector<int>(2,-1)));
                
                return profit(prices,i, n,k,dp,holding);
        }
};