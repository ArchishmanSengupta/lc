class Solution {
public:
    int md=1e9+7;
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        int dp[maxMove+1][m][n];
        memset(dp,0,sizeof dp);
        for(int i=0;i<maxMove;i++){
            for(int j=0;j<m;j++){
                for(int k=0;k<n;k++){
                    if(i==0){
                        dp[i][j][k]+=(j-1<0 ? 1 : 0);
                        dp[i][j][k]+=(k-1<0 ? 1 : 0);
                        dp[i][j][k]+=(j+1 >= m ? 1 :0);
                        dp[i][j][k]+=(k+1>= n ? 1 : 0);
                    }
                    else{
                        long a=(j-1<0 ? 1 : dp[i-1][j-1][k]);
                        long b=(k-1<0 ? 1 : dp[i-1][j][k-1]);
                        long c=(j+1 >= m ? 1 : dp[i-1][j+1][k]);
                        long d=(k+1>= n ? 1 : dp[i-1][j][k+1]);
                        
                        dp[i][j][k] = ((a+b+c+d)*1L)%md;
                    }
                }
            }
        }
        if(maxMove==0){
            return dp[0][startRow][startColumn];
        }
        return dp[maxMove-1][startRow][startColumn];
    }
};