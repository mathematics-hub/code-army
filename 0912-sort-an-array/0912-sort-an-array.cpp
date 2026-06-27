class Solution {
public:
    void merge(vector<int>& nums, int start, int mid, int end) {
        vector<int> temp(end - start + 1);
        int left = start, right = mid + 1, index = 0;
        while (left <= mid || right <= end) {
            if (left > mid) {
                temp[index++] = nums[right++];
            } else if (right > end) {
                temp[index++] = nums[left++];
            } else if (nums[left] <= nums[right]) {
                temp[index++] = nums[left++];
            } else {
                temp[index++] = nums[right++];
            }
        }
        index = 0;
        while (start <= end) {
            nums[start] = temp[index];
            start++;
            index++;
        }
    }
    void mergeSort(vector<int>& nums, int start, int end) {
        if (start >= end) {
            return;
        }
        int mid = (start + end) / 2;
        mergeSort(nums, start, mid);
        mergeSort(nums, mid + 1, end);
        merge(nums, start, mid, end);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna