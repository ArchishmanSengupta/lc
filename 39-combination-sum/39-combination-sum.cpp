class Solution {
public:
        
        void recursiveCalls(int index, int target, vector<int>& candidates, vector<vector<int>>& result, vector<int>& store){
                
                if(index == candidates.size()){
                        if(target == 0){
                                result.push_back(store);
                        }
                        return;
                }
                
                // ON Every element
                if(candidates[index] <= target){
                        store.push_back(candidates[index]);
                        recursiveCalls(index, target - candidates[index], candidates, result, store);
                        store.pop_back(); // IMP step
                }
                
                // Keep on increasing the indexes
                recursiveCalls(index + 1, target, candidates, result, store);
                
        }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            vector<vector<int>> result;
            vector<int> store;
            /*
            @param - Index
            @param - Target value
            @param - candidates
            @param - result
            @param - store
            */
           recursiveCalls(0, target, candidates, result, store); 
           return result;       
    }
};