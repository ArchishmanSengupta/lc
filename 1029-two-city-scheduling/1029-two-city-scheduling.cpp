class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
            int costA = 0;
            vector<int> difference;
            int len =costs.size();
            for(int i = 0; i<len;i++){
                    costA+=costs[i][0]; difference.push_back(costs[i][1]- costs[i][0]);
            }
            sort(difference.begin(), difference.end());
            for(int i=0;i<len/2;i++){
                    costA+=difference[i];
            }
            return costA;
            
    }
};