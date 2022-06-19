class Solution {
public:
    void sortColors(vector<int>& nums) {
           
            // lets make a count for each colors and mark the colors as 
            // red =0, white=1, blue=2
            
            int redCount = 0, whiteCount = 0, blueCount = 0;
            
            int red = 0, white = 1, blue = 2;
            
            
            for(auto i: nums){
                    if(i==0) redCount++;
                    else if(i==1) whiteCount++;
                    else blueCount++;
            }
            
            for(int i = 0;i<nums.size();i++){
                    if(redCount!=0){
                            nums[i] = 0;
                            redCount--;
                    }
                    else if(whiteCount!=0){
                            nums[i] =1;
                            whiteCount--;
                    }
                    else if(blueCount!=0){
                            nums[i]=2;
                            blueCount--;
                    }
            }

    }
};