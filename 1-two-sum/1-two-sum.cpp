class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> mpp;
            vector<int> result;
            
            for(int i=0;i<nums.size();i++){
                    int x = target - nums[i];
                    
                    if(mpp.find(x)!=mpp.end()){
                            result.push_back(mpp[x]);
                            result.push_back(i);
                            return result;
                    }
                    mpp[nums[i]] = i;
            }
            return result;
            
            
            
    }
        
};