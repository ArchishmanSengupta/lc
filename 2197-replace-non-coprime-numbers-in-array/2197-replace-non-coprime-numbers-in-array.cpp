class Solution {
public:
        int __gcd(int m, int n) {
           int r = 0, a, b;
           a = (m > n) ? m : n;
           b = (m < n) ? m : n;
           r = b;
           while (a % b != 0) {
              r = a % b;
              a = b;
              b = r;
           }
           return r;
        }
        int lcm(int m, int n) {
           int a;
           a = (m > n) ? m: n;
           while (true) {
              if (a % m == 0 && a % n == 0)
                 return a;
                 ++a;
           }
        }
    vector<int> replaceNonCoprimes(vector<int>& nums) {
          vector<int> result;
        for(int &i:nums) {
            result.push_back(i);       
            while(result.size()>1 and __gcd(result.back(),result[result.size()-2])>1) {    
                long long a=result.back(),b=result[result.size()-2],g=__gcd(a,b);  
                result.pop_back();      
                result.pop_back();
                result.push_back(a*b/g);
            }
        }
        return result;
            
    }
};