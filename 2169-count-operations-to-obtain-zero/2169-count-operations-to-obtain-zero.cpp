class Solution {
public:
    int countOperations(int num1, int num2) {
            long count=0,ans=0;
            for(;num2 and num1;ans++){
            if(num1>=num2){
                    num1-=num2;
            }
            else{
                    num2-=num1;
            }
                    count++;
            
           }
            return count;
    }
};