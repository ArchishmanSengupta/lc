class Solution {
public:
    int maximumSwap(int num) {
        string num_in_str = to_string(num);
    string temp = num_in_str;
 
    // swapping each digit
    for (int i = 0; i < num_in_str.size(); i++) {
        for (int j = i + 1; j < num_in_str.size(); j++) {
 
            // Swapping and checking for the larger
            swap(num_in_str[i], num_in_str[j]);
            if (stoi(num_in_str) > stoi(temp))
                temp = num_in_str;
 
            // Reverting the changes
            swap(num_in_str[i], num_in_str[j]);
        }
    }
 
    return stoi(temp);
    }
};