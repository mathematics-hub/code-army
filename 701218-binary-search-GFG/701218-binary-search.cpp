class Solution {
	public:
	bool binarySearch(vector<int>& arr, int k) {
		// code here
		int start = 0, end = arr.size() - 1, mid;
		while (start <= end) {
			mid = (start + end)/2;
			if (arr[mid] == k) {
				return true;
			}
			else if (k<arr[mid]) {
				end = mid - 1;
			}
			else {
				start = mid + 1;
			}
		}
		return false;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna