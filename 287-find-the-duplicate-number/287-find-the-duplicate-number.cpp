class Solution {
public:
    int findDuplicate(vector<int>& nums) {
           unordered_map<int, int> mpp;
            for(auto i:nums){
                    mpp[i]++;
            }
            int ans=0;
            for(auto i: mpp){
                    if(i.second>=2){
                     ans=i.first;       
                    }
            }
            return ans;
    }
   
    
};