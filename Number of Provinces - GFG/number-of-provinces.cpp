//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  void dfs(int i, vector<int> adjls[], int visited[]){
        //mark the node as visited
        visited[i] = 1;
        for(auto it:adjls[i]){
            if(!visited[it]){
                dfs(it, adjls,visited);
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // Changing the adjacency matrix to Adjacency List
        vector<int> adjls[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1 and i!=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        
        //Mak
        int visited[V]={0};
        
        int counter = 0;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                counter++;
                dfs(i,adjls,visited);
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
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends