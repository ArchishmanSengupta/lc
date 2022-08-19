class Solution {
public:
    bool isPossible(vector<int>& nums) {
     unordered_map<int, int> m;
        for(int n: nums) m[n]++;
        for(int n: nums){
            if(m[n] == 0) continue;
            int freq = m[n], count = 0, curr = n;
            while(m.count(curr) && m[curr] >= freq){
                freq = max(freq, m[curr]);
                m[curr]--;
                curr++;
                count++;
            }
            if(count < 3) return false;
        }
        return true;
    }
};