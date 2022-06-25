class Solution {
public:
    bool isIsomorphic(string s, string t) {
            
            if(s.size() !=t.size()) return false;
            
        map<char,char> mpp;
            set<char> ss;
            
            for(int i=0;i<s.size();i++){
                    if(mpp.count(s[i])==0 and ss.count(t[i])==0){
                            mpp[s[i]] = t[i];
                            ss.insert(t[i]);
                    }
                    else if(mpp.count(s[i]) == 0 and ss.count(t[i])){
                            return false;
                    }
                    else if(mpp[s[i]]!=t[i]) return false;
            }
            return true;
            
    }
};