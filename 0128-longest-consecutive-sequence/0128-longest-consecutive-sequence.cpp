class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int maxCount = 0;

        if(nums.empty()){
            return 0;
        }
        
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n - 1; i++){
            int d = nums[i+1] - nums[i];
            if(d == 1){
                count++;
            }
            else if(d == 0){
                continue;
            }
            else{
                maxCount = max(maxCount, count + 1);
                count = 0;
            }
        }
        maxCount = max(maxCount, count + 1);

        return maxCount;
    }
};