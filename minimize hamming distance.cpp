// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find minimum Hamming
// Distance after atmost one operation
int minimumHammingDistance(string S, int K)
{
	// Store the size of the string
	int n = S.size();

	// Store the prefix sum of 1s
	int pref[n];

	// Create Prefix Sum array
	pref[0] = S[0] - '0';
	for (int i = 1; i < n; i++)
		pref[i] = pref[i - 1] + (S[i] - '0');

	// Initialize cnt as number of ones
	// in string S
	int cnt = pref[n - 1];

	// Store the required result
	int ans = cnt;

	// Traverse the string, S
	for (int i = 0; i < n - K; i++) {

		// Store the number of 1s in the
		// subtring S[i, i+K-1]
		int value = pref[i + K - 1]
					- (i - 1 >= 0 ? pref[i - 1] : 0);

		// Update the answer
		ans = min(ans, cnt - value + (K - value));
	}

	// Return the result
	return ans;
}

// Driver Code
int main()
{

	// Given Input
	string s = "101";
	int K = 2;

	// Function Call
	cout << minimumHammingDistance(s, K);

	return 0;
}
