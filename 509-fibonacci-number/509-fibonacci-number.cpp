class Solution {
public:
    int fibo[30+1];
    int fib(int n) {
        fibo[0]=0;
        fibo[1]=1;
        for(int i=2;i<=n;i++){
            fibo[i]=fibo[i-1]+fibo[i-2];
            
        }
        return fibo[n];
    }
};