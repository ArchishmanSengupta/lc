class Solution {
    
public:

    bool dfs(vector<int>& mat,int ind,int side,vector<int>&s)
    {
        if( ind >= mat.size() )
            return s[0] == s[1] && s[2] == s[3] ;
            
        
        for(int i=0;i<4;i++)
        {
            if( s[i]+mat[ind] <= side )
            {
                s[i]+=mat[ind] ;
                if(dfs(mat,ind+1,side,s))
                    return true ;
                s[i]-=mat[ind] ;
            }
        }
        
        return false ;
    }
        
    bool makesquare(vector<int>& mat ) {
        
        if(mat.size()<4)
            return false ;
        
        int sum = accumulate(mat.begin(),mat.end(),0) ;
        vector<int>s(4,0) ;

        if(sum%4)
            return false ;
        
        sort(mat.begin(),mat.end(),[](const int &a, const int &b){
            return a > b;
        });
        
        int side = sum/4 ;
        
        return dfs(mat,0,side,s);
        
    }
    
};