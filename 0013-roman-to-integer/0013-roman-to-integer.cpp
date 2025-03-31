class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romNum {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int sum = 0;   

        for ( int i = 0; i < s.size() - 1; i++) {
            if (romNum[s[i]] < romNum[s[i + 1]]) {
                sum -= romNum[s[i]];
            } else {
                sum += romNum[s[i]];
            }
        }

        return sum + romNum[s[s.size() - 1]];
    }
};