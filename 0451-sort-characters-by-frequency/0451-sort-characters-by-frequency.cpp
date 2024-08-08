class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> map;
        string str = "";
        
        for(char c: s){
            map[c]++;
        }

        vector<pair<int, char>> res;

        for(auto ele: map){
            res.push_back({ele.second, ele.first});
        }

        sort(res.begin(), res.end(), greater<pair<int, char>>());

        for(auto ele: res){
            for(int i = 0; i < ele.first; i++)
            str += ele.second;
        }
        return str;
    }
};