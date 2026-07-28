class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int window_start = 0;
        int max_length = 0;
        int n = s.length();

        for(int window_end = 0; window_end<n; window_end++)
        {
            char right_char = s[window_end];
            if(map.count(right_char))
            {
                window_start = max(window_start, map[right_char]+1);
            }
            map[right_char] = window_end;

            max_length = max(max_length, window_end-window_start+1);
        }
        return max_length;
    }
};