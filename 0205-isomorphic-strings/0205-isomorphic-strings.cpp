class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> smap;
        unordered_map<char, char> tmap;

        if(s.size() != t.size()) return false;

        for(int i = 0; i < s.size(); i++){
            smap[s[i]] = t[i];
            tmap[t[i]] = s[i];
        }

        for(int i = 0; i < smap.size(); i++){
            if(smap.find(s[i]) != smap.end() && smap[s[i]] != t[i]) return false;
            if(tmap.find(t[i]) != tmap.end() && tmap[t[i]] != s[i]) return false;
        }
        return true;
        
    }
};