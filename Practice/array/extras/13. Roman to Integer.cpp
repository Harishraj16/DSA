class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int res = 0;
        
        // Loop through the string
        for (int i = 0; i < s.size(); i++) {
            if (i < s.size() - 1 && mp[s[i]] < mp[s[i + 1]]) {
                res -= mp[s[i]]; // Subtract if a smaller value precedes a larger one
            } else {
                res += mp[s[i]]; // Otherwise, add the value
            }
        }
        
        return res;
    }
};
