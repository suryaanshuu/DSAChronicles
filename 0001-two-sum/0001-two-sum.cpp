class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int flag = 0;
        vector<int> ans;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if((nums[i] + nums[j] == target) && (flag == 0) && (i != j)){
                    ans.push_back(i);
                    ans.push_back(j);
                    flag = 1;
                }
            }
        }
        return ans;
    }
};