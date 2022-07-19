class Solution {
public:
    double myPow(double x, int n) {
        long long store = n;
            double ans = 1.0;
            if(store<0) store=-1*store;
            
            while(store>0){
                    if(store%2==0){
                            x*=x;
                            store=store/2;
                    }
                    else{
                          ans =ans*x;
                            store=store-1;
                    }
            }
            if(n<0) ans =(double)(1.0)/(double)(ans);
            return ans;
            
    }
};