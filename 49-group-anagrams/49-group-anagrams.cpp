class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> grouped;
            unordered_map<string, vector<string>> mpp;
            
            for(auto i: strs){
                    string sorted = i;
                    sort(sorted.begin(),sorted.end());
                    mpp[sorted].push_back(i);
            }
            
            for(auto &i: mpp){
                    grouped.push_back(i.second);
            }
            return grouped;
    }
};