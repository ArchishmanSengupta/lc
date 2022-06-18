class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       
            int n = nums.size()-1;
            int mini = INT_MAX;
            int breakingPoint = 0;
            
            // from back get the breaking point
            for(int i = n; i>0; i--){
                    if(nums[i] > nums[i-1]){
                            breakingPoint = i;
                            break;
                    }
            }
            // base case 
            if(breakingPoint == 0){
                    sort(nums.begin(),nums.end());
            }
            else{
                    int numToSwap = nums[breakingPoint - 1];
                    
                    for(int j=breakingPoint; j<=n;j++){
                        
                            if(nums[j] - numToSwap > 0 and nums[j] - numToSwap < mini){
                               int swapping = nums[j];
                                    nums[j] = nums[breakingPoint - 1];
                                    nums[breakingPoint - 1] = swapping;
                            }
                    }
                    
                    sort(nums.begin() + breakingPoint, nums.end());
            }
    }
};