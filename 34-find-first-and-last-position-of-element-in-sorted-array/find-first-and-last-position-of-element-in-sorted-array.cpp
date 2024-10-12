class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();
        int low = 0;
        int high = size - 1;
        vector<int> res(2,-1);

        while (low <= high) {
            int mid = (high + low) / 2;

            if (nums[mid] == target) {
                // Update res[0] and res[1] accordingly
                res[0] = mid;
                res[1] = mid;

                // Search for the first occurrence
                int left = mid - 1;
                while (left >= 0 && nums[left] == target) {
                    res[0] = left;
                    left--;
                }

                // Search for the last occurrence
                int right = mid + 1;
                while (right < size && nums[right] == target) {
                    res[1] = right;
                    right++;
                }

                break;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return res;
    }
};