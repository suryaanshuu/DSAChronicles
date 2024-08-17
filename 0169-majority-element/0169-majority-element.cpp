class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        if(n%2 == 0){
            return nums[(n/2)-1];
        }
        else{
            return nums[(n/2)];
        }
        return -1;
    }
};

// // Moore's Voting Algo is used here
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         int count = 0;
//         int candidate;

//         for(int i = 0; i < n; i++){
//             if(count == 0){
//                 candidate = nums[i];
//             }

//             if(nums[i] == candidate){
//                 count++;
//             }
//             else if(nums[i] != candidate){
//                 count--;
//             }
//         }

//         int confirmCount = 0;
//         for(int num : nums){
//             if(num == candidate){
//                 confirmCount++;
//             }
//         }

//         if(confirmCount > nums.size() / 2) {
//             return candidate;
//         }
//     return 0;
//     }
// };

