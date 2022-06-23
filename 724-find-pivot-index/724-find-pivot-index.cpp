class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumLeft = 0, sumRight = 0,sum=0;
            
            for(auto i: nums){
                    sum = sum + i;
            }
            for(int i=0;i<nums.size();i++){
                    sumRight = sum - nums[i] - sumLeft;
                    if(sumRight == sumLeft){
                            return i;
                    }
                    sumLeft = sumLeft + nums[i];
            }
            return -1;
    }
};