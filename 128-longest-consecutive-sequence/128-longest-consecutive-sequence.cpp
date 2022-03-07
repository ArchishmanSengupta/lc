class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int n=nums.size();
        int largestlength=0;
        
        //We don't sort as it will take o(NlogN) time 
        //Instead we do O(1) lookup via unordered set
        
        for(auto x: nums){
            s.insert(x);
        }
        
        // For each element we check if its a parent or not
        for(auto element: s){
            int parent=element-1;
            
            // If yes then we find the next consecutive elements too and we increase the count
            if(s.find(parent)==s.end()){
                
                int next_pos=element+1;
                int count =1;
                
                
                while(s.find(next_pos)!=s.end()){
                    next_pos++;
                    count++;
                }
                // Simply updating the largestlength value if count is greater
                if(count>largestlength){
                    largestlength=count;
                }
            }
            
        }
        return largestlength;
        
    }
};