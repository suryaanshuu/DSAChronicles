// This was a basic approach
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());

//         if(s==t){
//             return true;
//         }
//         return false;
//     }
// };
\
// This approach uses Hash Maps (freqency maps)
class Solution {
public:
    bool isAnagram(string s, string t) {    
        unordered_map<char, int> sm;
        unordered_map<char, int> tm;
        if(s.length() != t.length()) return false;
        else{
            for(int i = 0; i < s.length(); i++){
                sm[s[i]]++;
            }

            for(int i = 0; i < t.length(); i++){
                tm[t[i]]++;
            }

            for(auto ele: sm){
                char ch1 = ele.first;
                int freq1 = ele.second;
                if(tm.find(ch1) != tm.end()){
                    int freq2 = tm[ch1];
                    if(freq1 != freq2) return false;
                }
                else return false;
            }
        }
        return true;
    }
};