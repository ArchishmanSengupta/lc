class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
            
            int rows = board.size();
            int columns = board[0].size();
            
            for(int i=0; i<rows; i++){
                    for(int j=0; j<columns; j++){
                            if(searchMethod(board, word, i, j, 0)){
                                    return true;
                            }
                    }
            }
            return false;
    }
        bool searchMethod(vector<vector<char>>&board, const string& word, int i, int j, int index){
                if(index == word.length()) return true;
                
                // BOUNDARY cases
                if(
                        i<0 or
                        j<0 or 
                        i>board.size() - 1 or
                        j>board[0].size() - 1) {
                        return false;
                }
                if(board[i][j] != word[index]) return false;
                board[i][j] = '0';
                bool visited = 
                        searchMethod(board, word, i+1, j, index + 1)
                        or searchMethod(board, word, i-1, j, index + 1)
                        or searchMethod(board, word, i, j-1, index + 1)
                        or searchMethod(board, word, i, j+1, index + 1);
                
                board[i][j] = word[index];
                return visited;
                
        }
};