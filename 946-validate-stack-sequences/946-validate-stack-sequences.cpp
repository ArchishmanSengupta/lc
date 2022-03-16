class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
     
            stack<int> s;
            int n = pushed.size();
            for(int i=0,j=0;i<n;i++){
                    s.push(pushed[i]);
                    while(!s.empty() and s.top() == popped[j]){
                            s.pop();j++;
                    }
            }
            if(s.empty()) return true;
            else return false;
    }
};