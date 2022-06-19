class Solution {
        const int INF =1e9+5;
        public:
    int maxProfit(vector<int>& prices) {
        
            int best_without_stock=0, best_with_stock = -INF;
            
            for(auto i : prices){
                    best_with_stock = max(best_with_stock, best_without_stock - i);
                    best_without_stock = max(best_without_stock, best_with_stock+i);
            }
            return best_without_stock;
    }
};