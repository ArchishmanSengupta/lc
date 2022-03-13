class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
            
        if(s.length()%2==1){return false;}
          
            for(auto i:s){
                    if(i=='(' or i=='[' or i=='{'){
                            stk.push(i);
                    }
                    else{
                            if(stk.empty()){
                                    return false;
                            }
                            if(i==')' and stk.top()!='(') return false;
                            if(i==']' and stk.top()!='[')return false;
                            if(i=='}' and stk.top()!='{')return false;
                            stk.pop();
                    }
            }
            return stk.empty();
    }
};