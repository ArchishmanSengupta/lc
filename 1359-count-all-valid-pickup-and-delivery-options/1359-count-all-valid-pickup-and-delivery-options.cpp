class Solution {
public:
    int countOrders(int n) {
            
            //Simple Math??
            long long res=1, mod=1e9+7;
            for(int i=2; i<=n; i++){
                    int possibility = 1 + 2*(i-1);
                    res *= possibility * (possibility + 1)/2;
                    res= res % mod;
            }
            return res;
    }
};