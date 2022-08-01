class Solution {
public:
    int uniquePaths(int m, int n) {
        long directions=n+m-2;
        long r=m-1;
        long long res=1;
        for(int i=1;i<=r;i++){
            res=res*(directions-r+i)/i;
        }
        return res;
    }
};