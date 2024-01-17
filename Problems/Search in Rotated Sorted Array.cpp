
class Solution {
public:
    int getpivot(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        while (s < e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] >= nums[e]) {
                s = mid + 1;
            } else {
                e = mid;
            }
        }
        return s;
    }

    int Bsearch(vector<int>& nums, int s, int e, int target) {
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (target == nums[mid]) {
                return mid;
            } else if (target > nums[mid]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivot = getpivot(nums);
        int n = nums.size();
        if (target <= nums[n - 1] && target >= nums[pivot]) {
            return Bsearch(nums, pivot, n - 1, target);
        } else {
            return Bsearch(nums, 0, pivot - 1, target);
        }
    }
};
