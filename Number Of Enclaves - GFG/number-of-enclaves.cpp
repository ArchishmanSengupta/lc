//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        queue<pair<int,int>> q;
        int n = grid.size();
        int m = grid[0].size();
        
        // visited Matrix
        int visited[n][m] = {0};
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // part of first, last row and first col, last col
                if(i == 0 or j== 0 or i == n-1 or j == m-1){
                    if(grid[i][j] == 1){
                        q.push({i,j});
                        visited[i][j] = 1;
                    }
                } 
            }
        }
        
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,+1,0,-1};

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            for(int i = 0; i<4; i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                
                if(nrow>=0 and 
                nrow<n and 
                ncol>=0 and 
                ncol<m and 
                visited[nrow][ncol] == 0 and 
                grid[nrow][ncol] == 1){
                    q.push({nrow,ncol});
                    visited[nrow][ncol] = 1;
                }
            }
        }
        
        int counter = 0;
        
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j] == 1 and visited[i][j]==0){
                    counter++;
                }
            }
        }
        return counter;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends