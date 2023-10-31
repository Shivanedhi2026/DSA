class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> symbolValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int result = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (i < s.length() - 1 && symbolValues[s[i]] < symbolValues[s[i + 1]]) {
                result += symbolValues[s[i + 1]] - symbolValues[s[i]];
                ++i;  
            } else {
                result += symbolValues[s[i]];
            }
        }

        return result;
    }
};
