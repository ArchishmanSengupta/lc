class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> res(n);
            res[0] = start;
            for(int i=1;i<n;i++){
                    res[i] = start + 2*i;
            }
            int summation=0;
            for(auto i: res){
                    summation^=i;
            }
            return summation;
    }
};