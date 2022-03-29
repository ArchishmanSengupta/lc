class Solution {
public:
    int findDuplicate(vector<int>& nums) {
            unordered_map<int,int> mpp;
            
            for(auto i: nums){
                    mpp[i]++;
            }
            int res=0;
            for(auto i: mpp){
                    if(i.second>=2){
                            res=i.first;
                            break;
                    }
            }
            return res;
    }
   
    
};