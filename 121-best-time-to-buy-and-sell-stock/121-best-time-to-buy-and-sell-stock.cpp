class Solution {
public:
    int maxProfit(vector<int>& prices) {     
            int maxi = 0;
            int mini = INT_MAX;
            
            const int n = prices.size();
            
            for(size_t i = 0; i<n; i++){
                    mini = min(mini, prices[i]);
                    maxi = max(maxi, prices[i] - mini);
            }
        return maxi;
    }
};