class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        // sorting decreasing capacity
            
            sort(begin(boxTypes), end(boxTypes),[](auto &a,auto &b){return a[1]>b[1];});
            int maxUnits=0;
            for(auto i: boxTypes){
                    if(truckSize<=0) break;
                    
                    maxUnits +=min(i[0], truckSize)*i[1];
                    
                    truckSize-=i[0];
            }
            return maxUnits;
    }
};