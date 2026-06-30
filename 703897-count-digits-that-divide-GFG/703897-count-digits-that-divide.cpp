class Solution {
	public:
	// Function to count the number of digits in n that evenly divide n
	int evenlyDivides(int n) {
		// code here
		int num = n;
		int count = 0;
		while (n != 0) {
			int r = n%10;
			if (r != 0 && num%r == 0) {
				count++;
			}
			n = n/10;
		}
		return count;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna