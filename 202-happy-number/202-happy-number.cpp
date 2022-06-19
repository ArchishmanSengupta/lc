class Solution {
        int f(int n){ //LOGN
                int sum =0;
                while(n){
                        int digit = n%10; n/=10; sum+=digit*digit;
                }
                return sum;
        }
public:
    bool isHappy(int n) {
            
           for(int i=0;i<20;i++){
                   n=f(n);
                   if(n==1) return true;
           } 
            return false;
    }
};