class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftPointer=0, maximumArea=0;
            int rightPointer = height.size()-1;
            
            while(leftPointer<rightPointer){
                    int leftHeight = height[leftPointer];
                    int rightHeight = height[rightPointer];
                    
                    int mini = min(leftHeight, rightHeight);
                    
                    maximumArea = max(maximumArea, mini*(rightPointer-leftPointer));
                    if(leftHeight< rightHeight){
                            leftPointer++;
                    }
                    else{
                            rightPointer--;
                    }
            }
            return maximumArea;
        
    }
};