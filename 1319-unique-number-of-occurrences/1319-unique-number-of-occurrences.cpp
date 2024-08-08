class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // Using Hash Maps
        unordered_map<int, int> map;
        unordered_set<int> len;

        for(int ele: arr){
            map[ele]++;
        }

        for(auto ele: map){
            len.insert(ele.second);
        }

        return len.size() == map.size();
    }
};