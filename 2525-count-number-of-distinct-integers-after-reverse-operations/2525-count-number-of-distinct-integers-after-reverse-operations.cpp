class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s;
        
        for(int i = 0; i < nums.size(); i++){
            s.insert(nums[i]);
            int reverse = 0;
            int orig = nums[i];
            while(orig != 0){
                int digit = orig % 10;
                reverse = reverse * 10 + digit;
                orig = orig / 10;
            }
            s.insert(reverse);
        }
        return s.size();
    }
};