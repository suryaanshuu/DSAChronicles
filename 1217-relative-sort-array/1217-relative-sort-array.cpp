class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> map;
        vector<int> res;
        int latcountuse = 0;

        for(int ele: arr1){
            map[ele]++;
        }
        
        for(auto ele: arr2){
            for(int i = 0; i < map[ele]; i++) res.push_back(ele);
            map[ele] = 0;
        }

        latcountuse = res.size();

        for(auto ele: map){
            if(ele.second > 0){
                for(int i = 0; i < ele.second; i++) res.push_back(ele.first);
            }
            ele.second = 0;
        }

        sort(res.begin() + latcountuse, res.end());

    return res;
    }
};