class Solution {
public:
    int majorityElement(vector<int>& nums) {
            
            unordered_map<int, int> mpp;
            
            for(const auto i : nums){
                    mpp[i]++;
            }
            
            vector<int> v;
            long major = floor(nums.size()/2);
            long save = 0;
            for(auto i: mpp){
                    if(i.second > major){
                        save = i.first;
                    }
            }
            return save;
    }
};