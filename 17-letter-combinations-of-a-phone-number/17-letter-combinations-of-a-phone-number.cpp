class Solution {
public:
        
        void mapper(string digits, string output, int index, vector<string>&ans, string mapping[]){
                //base case
                
                if(index >= digits.length()){
                        ans.push_back(output);
                        return;
                }
                
                int number = digits[index] - '0';
                string value = mapping [number];
                
                
                for(int i =0;i<value.length();i++){
                        output.push_back(value[i]);
                        
                        mapper(digits, output, index + 1, ans, mapping);
                        output.pop_back();
                }
        }
    vector<string> letterCombinations(string digits) {
            
            // 3^(string length)
            
            //abc def ghi jkl mno pqrs tuv wxyz
            // 2   3   4   5   6   7    8   9
            
            vector<string> ans;
            string output;
            int index = 0;
            if(digits.length()==0) return ans;
            //mapping 
            
            string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
            
            mapper(digits,output, index, ans,mapping);
                 return ans;   
    }
};