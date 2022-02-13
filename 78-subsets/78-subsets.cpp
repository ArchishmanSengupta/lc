class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> resultant{{}};
            
            for(int num : nums){
                    int n = resultant.size();
                    for(int i=0; i<n; i++){
                            resultant.push_back(resultant[i]);
                            resultant.back().push_back(num);
                    }
            }
            return resultant;
    }
};