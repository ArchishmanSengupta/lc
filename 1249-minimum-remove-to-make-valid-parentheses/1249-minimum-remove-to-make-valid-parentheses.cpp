class Solution {
public:
    string minRemoveToMakeValid(string s) {
            int n=s.length();
            stack<int> stk;
            for(int i = 0; i<n;i++){
                    if(s[i]=='('){
                            stk.push(i);
                    }
                    else if(s[i]==')'){
                            if(stk.empty()){
                                    s[i]='#';
                            }
                            else{
                                    stk.pop();
                            }
                    }
            }
            
            while(!stk.empty()){
                    s[stk.top()]='#';
                    stk.pop();
            }
            string ans="";
            for(int i=0; i<n;i++){
                    if(s[i]!='#'){
                            ans.push_back(s[i]);
                    }
            }
            return ans;
            
            
            
    }
};