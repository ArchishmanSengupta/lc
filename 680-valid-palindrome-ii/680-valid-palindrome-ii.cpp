class Solution {
public:
        bool isPalindrome(string s, int i, int j){
                while(i<j){
                        if(s[i]==s[j]){
                                i++;
                                j--;
                        }
                        else return false;
                }
                return true;
        }
    bool validPalindrome(string s) {
        //two pointers approach
            int i=0,j=s.length()-1;
            while(i<j){
                    if(s[i]==s[j]){
                            // cout<<"1";
                           i++;j--;
                    }else{
                            return isPalindrome(s,i+1,j) or isPalindrome(s,i,j-1);
                    }
            }
            return true;
    }
        
};