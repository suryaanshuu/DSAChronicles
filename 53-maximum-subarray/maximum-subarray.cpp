// Kadane's Algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> res;
        int currSum = 0;
        int maxSum = INT_MIN;

        if(nums.size() == 1){
            return nums[0];
        }

        for (int i = 0; i < nums.size(); i++) {
            currSum += nums[i];

            if (currSum <= 0) {
                int temp = currSum;
                currSum = 0;
                maxSum = max(maxSum, temp);
            }
            else
                maxSum = max(maxSum, currSum);
        }

        return maxSum;
    }
};