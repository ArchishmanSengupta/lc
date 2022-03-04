class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
         double dp[2][101]={0};
     dp[0][0]=poured;
    for(int i=0;i<query_row;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(dp[i%2][j]>1)
            {
                dp[(i+1)%2][j]+=(dp[i%2][j]-1.0)/2.0;
                dp[(i+1)%2][j+1]+=(dp[i%2][j]-1.0)/2.0;
            }
            dp[i%2][j]=0;
            
        }
    }
    
    return dp[query_row%2][query_glass]>1?1:dp[query_row%2][query_glass];
    }
};