class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
              map<char,int> mpp;
            for(auto i: jewels){
                    ++mpp[i];
            }
            int ans =0;
            
            for(auto i: stones){
                    ans+=mpp[i];
            }
            return ans;
    }
};