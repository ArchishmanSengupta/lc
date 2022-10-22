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
                //CHECK IF THERE ARE NO SELF LOOPS
                
                if(adj[i][j]==1 and i!=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        
        //Making a adjacency List
        int visited[V]={0};
        
        //Initializing the counter variable which stores the number of provinces
        int counter = 0;
        
        for(int i=0;i<V;i++){
            //CHECK IF THE NODE IS NOT VISITED
            
            if(!visited[i]){
                
                //INCREMENT COUNTER TO COUNTER EACH STARTING NODE
                counter++;
                //CALL THE DFS FUNCTION FOR THE REST OF THE NODES
                dfs(i,adjls,visited);
            }
        }
        
        //RETURN COUNTER
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