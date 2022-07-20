class Solution {
public:
        int lcs(int i, int j, string &s1, string &s2,vector<vector<int>> &dp){
                
                if(i>=s1.size() or j>=s2.size()){
                        return 0;
                }
                if(dp[i][j]!=-1){
                        return dp[i][j];
                }
                if(s1[i]==s2[j]){
                        return 1+ lcs(i+1,j+1,s1,s2,dp);
                }
                else{
                        int left = lcs(i+1,j,s1,s2,dp);
                        int right = lcs(i,j+1,s1,s2,dp);
                        return dp[i][j]=max(left,right);
                        
                }
        }
    int longestCommonSubsequence(string text1, string text2) {
            
            int n = text1.length();
            int m = text2.length();
            vector<vector<int>> dp(n,vector<int>(m,-1));
            
            
        return lcs(0,0,text1,text2,dp);
    }
};