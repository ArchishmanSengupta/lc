class Solution {
public:
    int scoreOfParentheses(string s) {
            
            int depth = 0;
            int res=0;
            
            char prev = '(';
            
            for(auto i:s){
                    if(i=='('){
                            depth++;
                    }
                    else{
                            depth--;
                            if(prev=='(')
                            res= res+ pow(2, depth);
                    }
                    prev=i;
            }
            return res;     
        
    }
};