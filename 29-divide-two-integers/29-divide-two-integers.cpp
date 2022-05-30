class Solution {
public:
    int divide(int dividend, int divisor) {
        long long var=abs(divisor);
        long long res=abs(dividend);
        res=res/var;
        
        if((dividend>0 && divisor<0)||(dividend<0 &&divisor>0))
            res=res*(-1);
        return (int)min(res,2147483647LL);
        
    }
};