class Solution {
public:
    vector<int> minOperations(string boxes) {
            int n = boxes.size();
            vector<int> pref(n);
            
            pref[0]=0;
            int count = 0;
            for(int i=1;i<n;i++){
                    if(boxes[i-1]=='1'){
                            count++;
                            pref[i]=pref[i-1]+count;
                    }
                    else{
                            pref[i] = pref[i-1]+count;
                    }
            }
            
            vector<int> suff(n);
            suff[n-1]=0;
            count=0;
            
            for(int i=n-2;i>=0;i--){
                    if(boxes[i+1]=='1'){
                            count++;
                            suff[i]=suff[i+1]+count;
                    }
                    else{
                            suff[i]=suff[i+1]+count;
                    }
            }
            vector<int> ans(n);
            for(int i=0;i<n;i++){
                    ans[i] = pref[i]+suff[i];
            }
            return ans;
            
        
    }
};