class Solution {
public:
    bool judgeCircle(string s) {
            
            int coordinateX = 0;
            int coordinateY = 0;
            
            // Up 
            for(auto i: s){
                    if(i == 'U'){
                            coordinateY++;
                    }
                    else if(i == 'D'){
                            coordinateY--;
                    }
                    else if(i == 'L'){
                            coordinateX--;
                    }
                    if(i == 'R'){
                            coordinateX++;
                    }
            }
            if(coordinateX == 0 and coordinateY == 0) return true;
            
            return false;
        
    }
};