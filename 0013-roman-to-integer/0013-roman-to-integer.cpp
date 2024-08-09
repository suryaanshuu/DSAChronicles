class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map;
        int res = 0;
        
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;

        for(int i = s.size() - 1; i >= 0; i--){
            if(i > 0 && map[s[i]] > map[s[i-1]]){
                res += (map[s[i]] - map[s[i-1]]);
                i--;
            } else {
                res += map[s[i]];
            }
        }
        return res;
    }
};