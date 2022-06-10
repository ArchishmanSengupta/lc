class Solution {
public:
    void sortColors(vector<int>& nums) {
            int redCount = 0;
            int whiteCount = 0;
            int blueCount = 0;
            int red = 0, white = 1, blue =2;
            int n = nums.size();
            
            for(int i=0;i<n;i++){
                    int color = nums[i];
                    
                    if(nums[i]==0) redCount++;
                    if(nums[i]==1) whiteCount++;
                    if(nums[i]==2) blueCount++;
            }
            
            for(int i=0; i<n;i++){
                    if(redCount!=0){
                           nums[i] = 0;
                            redCount--;
                    }
                    else if(whiteCount!=0){
                            nums[i] =1;
                            whiteCount--;
                    }
                    else if(blueCount!=0){
                            nums[i] = 2;
                            blueCount--;
                    }
            }

    }
};