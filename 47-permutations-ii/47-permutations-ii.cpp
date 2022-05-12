class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         vector<vector<int>>v;
        vector<int>vec;
        sort(nums.begin(),nums.end());
        do{
            vec=nums;
            v.push_back(vec);
        }
        while(next_permutation(nums.begin(),nums.end()));
        return v;
    }
};