class Solution {
public:
        
        bool isDouble(int target, int startValue){
                if(target>startValue and target == startValue*2){
                        return true;
                }
                return false;
        }
    int brokenCalc(int startValue, int target) {
            
            int count=0;
            if(isDouble(target, startValue)){return 1;}
            if(target<startValue){
                    int difference = startValue - target;
                    return difference;
            }
            // Multiply karte raho if target>startValue*2
            // itna hi karo jab tak it doesnt exceeds 
            int tar = target, ans =0;
            while(startValue != tar){
            if(tar%2 == 0 and startValue < tar){
                tar /= 2;
            }
            else if(tar > startValue){
                tar +=1;
            }
            else{
                ans += abs(tar-startValue)-1;
                tar = startValue;
            }
            ans++;
        }
        return ans;
    }
};