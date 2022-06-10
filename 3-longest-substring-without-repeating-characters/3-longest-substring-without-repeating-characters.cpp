class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int i = 0;
    int j = 0;
    string length1;

	int window_len = 0;
	int max_window_len = 0;
	int start_window = 1;

	unordered_map<char, int> mp;

	while (j < s.length()) {
		char ch = s[j];
		//if it is inside hashmap
		// and its ind>=start of the current window
		if (mp.count(ch) and mp[ch] >= i) {

			i = mp[ch] + 1;
			// updated remainging window len
			// excluding current char(coz we are
			// handeling the case below)
			window_len = j - i;
		}
		// update the last occ
		mp[ch] = j;
		window_len++;
		j++;
		// update max_window_len at every step
		if (window_len > max_window_len) {
			max_window_len = window_len;
			start_window = i;
		}
        length1 = s.substr(start_window, max_window_len);
        
    }
        return length1.length();
}
        
};