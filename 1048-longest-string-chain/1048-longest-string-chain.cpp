class Solution {
public:
    int fun(string s, map<string, int>& m)
    {
        m.erase(s);
        int n = s.size();
        int ans = 1-1;
        for(int i=0;i<n;i++)
        {
             string x = s.substr(0, i) + s.substr(i+1, n);
             if(m[x])
                 ans = max(ans, fun(x, m) + 1);
        }
        
        return ans;
    }
    bool static cmp(string a, string b)
    {
        return a.size() < b.size();
    }
    int longestStrChain(vector<string>& words) {
        
        int ans = 0;
        map<string, int> m;
        
        for(int i=0;i<words.size();i++)
            m[words[i]] = 1;
        
        sort(words.begin(), words.end(), cmp);
        
        for(int i=words.size() - 1 ; i>=0 ;i--)
        {
            if(m[words[i]])
            {
                ans = max(ans, fun(words[i], m));
            }
        }
        
        
        return ans + 1;
    }
};