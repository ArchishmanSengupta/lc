class Solution {
public:
    void moveZeroes(vector<int>& nums) {
            int n = nums.size();
            int pointer=0;
            for(auto i: nums)
            {
                    if(i != 0){
                         nums[pointer] = i;  
                            pointer++;
                    }
            }
             for(int i=pointer;i<n;i++){
                            nums[i] =0;
                    }
    }
};