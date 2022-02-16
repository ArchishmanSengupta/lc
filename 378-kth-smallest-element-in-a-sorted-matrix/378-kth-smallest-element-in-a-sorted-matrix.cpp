class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
            vector<int> OneDMatrix;
            
            for(int i = 0; i<matrix.size(); i++){
                    for(int j = 0; j<matrix[0].size(); j++){
                            OneDMatrix.push_back(matrix[i][j]);
                    }
            }
            sort(OneDMatrix.begin(), OneDMatrix.end());
            return OneDMatrix[k-1];
    }
};