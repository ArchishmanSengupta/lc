class Solution {
public:
    int minimumSum(int num) {
        vector<int> sum(4,0);
            
            for(int i=0;i<4;i++){
                    sum[i] = num%10;
                    num=num/10;
            }
            sort(sum.begin(),sum.end());
            
            return ((sum[0]+sum[1])*10+sum[2]+sum[3]);
    }
};