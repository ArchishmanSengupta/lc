class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
      priority_queue<int> p;
        for(auto i: nums){
            p.push(i);
        }
        long ans=0;
        for(int i=0;i<k;i++){
            ans=p.top();
            p.pop();
        }
        return ans;
        
    }
};