class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
             const int H = matrix.size(); //row
        const int W = matrix[0].size(); // col
            
            // vector<bool> row_zero(H);
            vector<bool> col_zero(W);
            
            for(size_t row = 0; row<H; row++){
                    for(size_t col = 0; col<W; col++){
                            if(matrix[row][col] == 0){
                                    // row_zero[row] = true;
                                    col_zero[col] = true;
                            }
                    }
            }
            for(size_t row = 0; row<H; row++){
                    bool contains_zero = false;
                    for(int col = 0; col<W; col++){
                            if(matrix[row][col] == 0){
                                    contains_zero = true;
                            }
                    }
                    for(size_t col = 0; col<W; col++){
                            if(contains_zero || col_zero[col]){
                                    matrix[row][col]=0;
                            }
                    }
            }
    }
};