class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> unique;

        for(int i = 0; i < nums.size(); i++){
            unique.insert(nums[i]);
        }

        nums.clear();

        for(int ele: unique){
            nums.push_back(ele);
        }
        sort(nums.begin(), nums.end());
        return nums.size();
    }
};