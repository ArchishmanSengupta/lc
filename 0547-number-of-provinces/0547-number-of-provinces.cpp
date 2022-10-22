class Solution {
private:
    void dfs(int node, vector<int> adjls[], vector<int> &visited){
        visited[node]=1;
        for(auto i: adjls[node]){
            if(!visited[i]){
                dfs(i, adjls, visited);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
            
        int len = isConnected.size();
        vector<int> adjls[len];
        vector<int> visited(len,0);
        
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                if( i!=j and isConnected[i][j] == 1){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
            
        
        int counter = 0;
        
        for(int i=0;i<len;i++){
            if(!visited[i]){
                counter++;
                dfs(i, adjls, visited);
            }
        }
        return counter;
    }
};