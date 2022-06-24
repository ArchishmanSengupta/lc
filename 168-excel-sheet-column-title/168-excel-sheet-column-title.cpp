class Solution {
public:
    string convertToTitle(int n) {
            string result ="";
        if(n<1) {return "";}
            else{
                while(n){
                        n--;
                        char ch = n%26 + 'A';
                        result+=ch;
                        n/=26;
                }
                    reverse(result.begin(),result.end());
                    return result;
            }
    }
};