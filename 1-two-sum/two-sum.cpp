class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // for(int i=0;i<nums.size();i++){
        //     int q;
        //     cin>>q;
        //     nums.push_back(q);
        // }

        // cin>>target;

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