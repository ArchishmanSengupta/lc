class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
            int len = nums.size();
            if (len<3) return 0;
            
            int currentDifference = 0;
            int res =0;
            int ptr=0;
            int lastDifference = nums[1]-nums[0];
            
            for(int i = 1;i<len-1;i++){
                    int currentDifference = nums[i+1] - nums[i];
                    
                    if(currentDifference == lastDifference){
                           ptr++; 
                    }
                    else{
                            lastDifference = currentDifference;
                            ptr=0;
                    }
                    res+=ptr;
            }
            return res;
    }
};