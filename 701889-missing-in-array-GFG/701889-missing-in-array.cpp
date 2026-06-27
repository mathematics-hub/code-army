class Solution {
	public:
	int missingNum(vector<int>& arr) {
		int n = arr.size();
		int actual_sum=(n%2==0)?(n + 1)*((n + 2)/2):((n+1)/2)*(n+2);
		int total_sum=0;
		for (int i = 0; i<n; i++) {
			total_sum += arr[i];
		}
		return actual_sum-total_sum;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna