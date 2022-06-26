class Solution {
public:
    char slowestKey(vector<int>& a, string s) {
        
        int n = a.size();
            char ans = s[0];
            int maxi = a[0];
            for(int i=1;i<n;i++){
                    int curr = a[i] - a[i-1];
                    if(curr>maxi){
                            maxi = curr;
                            ans = s[i];
                    }
                    else if(curr == maxi and ans <s[i]){
                            ans =s[i];
                    }
            }
            return ans;
    }
};