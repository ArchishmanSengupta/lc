class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int ans = INT_MIN;
            int a=0;
            for(auto i: nums){
                    a+=i;
                    ans=max(a,ans);
                    a=max(a,0);
            }
            return ans;
                    
    }
};