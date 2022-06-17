class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
            
            for(int i=0;i<numRows;i++){
                    vector<int> v(i+1,1);
                    
                    for(int j=1;j<i;j++){
                            // current row -> i, previous row -> i-1
                            v[j] = res[i-1][j] + res[i-1][j-1];
                                    //sum of above two boxes
                    }
                    res.emplace_back(v);
                    
            }
            
            return res;
    }
};