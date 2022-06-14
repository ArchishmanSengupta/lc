class Solution {
public:
    int minDistance(string word1, string word2) {
         int s1=word1.size(),s2=word2.size();
        int dp[s1+1][s2+1];
        dp[0][0]=0;
        for(int i=0;i<=s1;i++){
            dp[i][0]=0;
        }
        for(int i=0;i<=s2;i++){
            dp[0][i]=0;
        }
        
        for(int i=1;i<=s1;i++){
            for(int j=1;j<=s2;j++){
                if(word1[i-1]==word2[j-1])dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max({dp[i-1][j-1],dp[i][j-1],dp[i-1][j]});
            }
        }
        return s1+s2-2*dp[s1][s2];
            
    }
};