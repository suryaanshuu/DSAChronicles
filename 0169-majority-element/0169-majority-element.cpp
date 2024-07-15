// Moore's Voting Algo is used here
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int candidate;

        for(int i = 0; i < n; i++){
            if(count == 0){
                candidate = nums[i];
            }

            if(nums[i] == candidate){
                count++;
            }
            else if(nums[i] != candidate){
                count--;
            }
        }

        count = 0;
        for(int num : nums){
            if(num == candidate){
                count++;
            }
        }

        if(count > nums.size() / 2) {
            return candidate;
        }
    return 0;
    }
};