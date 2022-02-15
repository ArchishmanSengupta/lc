class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
            unordered_map<int,int> mpp;
            for(auto i: nums){
                    mpp[i]++;
            }
            long save = 0;
            for(auto i: mpp){
                   if(i.second!=2){
                       
                           save = i.first;
                           break;
                   } 
            }
            return save;
    }
};