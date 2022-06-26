class Solution {
public:
    bool isRobotBounded(string instructions) {
        int a = 0, b = 0;
         const int cycle = 4;
            
            int initialDirection = 0; //NORTH->0 East->1 South->2 West->3 
            
            vector<vector<int>> directions = {{0,1}, {1,0},{0,-1},{-1,0}};
            for(auto i: instructions){
                    if(i == 'G'){
                            a += directions[initialDirection][0];
                            b += directions[initialDirection][1];
                    }
                    else if(i == 'L'){
                            initialDirection = initialDirection == 0? 3: (initialDirection - 1);
                    }
                    else if(i=='R'){
                            initialDirection = (initialDirection + 1)%cycle;
                    }
            }
            
            if(a == 0 and b == 0){ return true;}
            if(initialDirection == 0) {return false;}
            return true;
    }
};