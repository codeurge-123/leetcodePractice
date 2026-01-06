class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp;

        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int sum = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            if (i > 0) {
                if ((s[i] == 'V' || s[i] == 'X') && s[i - 1] == 'I') {
                    sum += mp[s[i]] - 1;
                    i--;
                } else if ((s[i] == 'L' || s[i] == 'C') && s[i - 1] == 'X') {
                    sum += mp[s[i]] - 10;
                    i--;
                } else if ((s[i] == 'D' || s[i] == 'M') && s[i - 1] == 'C') {
                    sum += mp[s[i]] - 100;
                    i--;
                } else {
                    sum += mp[s[i]];
                }
            } else {
                sum += mp[s[i]];
            }
        }
        return sum;
    }
};