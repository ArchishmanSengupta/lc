class Solution {
        
        //tc: O(nLOGN) +O(N)
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergedIntervals;
            
            if(intervals.size() == 0){
                    return mergedIntervals;
            }
            
            sort(intervals.begin(),intervals.end()); //O(NLOGN)
            
            vector<int> temp = intervals[0];
            
            for(auto i : intervals){ //o(n)
                    
                    // if the left most is less than the prev rightmost,
                    // then we choose the max of them
                    if(i[0] <= temp[1]){
                            temp[1] = max(i[1], temp[1]);
                    }
                    else{
                       mergedIntervals.push_back(temp);
                            temp = i;
                    }
            }
            mergedIntervals.push_back(temp);
            return mergedIntervals;
    }
};