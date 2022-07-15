class Solution {
public:
        
        long long maxProfit(int a, long long b){
                return (a>b);
        }
        
        long long maxProfit(vector<vector<long long>>&dp, long long m, long long n,map<pair<long long, long long>, long long> &mpp){
                if(dp[m][n] !=-1) return dp[m][n];
                
                long long ans = 0;
                
                if(mpp.find({m,n}) != mpp.end()){
                        ans = max(ans, mpp[{m,n}]);
                }
                
                // horizontally
                
                for(int i = 1;i<=m/2;i++){
                        ans = max(ans, maxProfit(dp, i, n, mpp) + maxProfit(dp,m-i,n,mpp));
                }
                
                //vertically
                for(int i = 1;i<=n/2;i++){
                        ans = max(ans, maxProfit(dp,m,i,mpp) + maxProfit(dp,m,n-i,mpp));
                }
                
                return dp[m][n] = ans;
                
                
        }
    long long sellingWood(int m, int n, vector<vector<int>>& prices) {
        map<pair<long long, long long>, long long> mpp;
            
            for(auto &i: prices){
                    mpp[{i[0],i[1]}] = i[2];
            }
            
            vector<vector<long long>> dp(m+1, vector<long long>(n+1,-1));
            
            return maxProfit(dp, m,n, mpp);
            

    }
};