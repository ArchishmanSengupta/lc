class Solution {
        const int INF =1e9+5;
        public:
    int maxProfit(vector<int>& prices) {
            int profits =0;
            for(int i=1;i<prices.size();i++){
                    if(prices[i]>prices[i-1]){
                            profits += prices[i]-prices[i-1];
                    }
            }
            return profits;
    }
};