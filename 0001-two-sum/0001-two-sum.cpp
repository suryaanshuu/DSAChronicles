// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         int y;
//         vector<int> ans;
        
//         for(int i = 0; i < n; i++){
//             for(int j = i+1; j < n; j++){
//                 if (nums[i] + nums[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };

// Using Hash Maps
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> res;
        
        for(int i = 0; i < nums.size(); i++){
           int diff = target - nums[i];

            if(map.find(diff) == map.end()){
                map[nums[i]] = i;
            }
            else{
                res.push_back(i);
                res.push_back(map[diff]);
                break;
            }
        }
        return res;
    }
};