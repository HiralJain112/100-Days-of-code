// C++ program for the above approach
#include <iostream>
using namespace std;

// Function to subtract one
// from the binary string
string sub(string s)
{
	int n = s.size();
	for (int i = n - 1; i >= 0; i--) {
		// If the current character
		// is 0 change it to 1
		if (s[i] == '0') {
			s[i] = '1';
		}
		else {
			// If the character is 1
			// Change is to 0 and
			// terminate the loop
			s[i] = '0';
			break;
		}
	}
	// Return the answer
	return s;
}

// Function to add 1 in the
// binary string
string ad(string s)
{
	int n = s.size();

	int carry = 0;
	for (int i = n - 1; i >= 0; i--) {
		// If s[i]=='1' it
		// will change s[i] to 0
		// and carry = 1
		if (s[i] == '1') {
			carry = 1;
			s[i] = '0';
		}
		else {
			// If s[i]=='0' it
			// will change s[i] to 1
			// and carry = 0 and
			// end the loop
			carry = 0;
			s[i] = '1';
			break;
		}
	}
	// If still carry left
	// append character 1 to the
	// beginning of the string
	if (carry) {
		s = '1' + s;
	}
	return s;
}

// Function to find xor from 1 to n
string xor_finder(string s)
{
	int n = s.size() - 1;

	// Variable val stores the
	// remainder when binary string
	// is divided by 4
	int val = s[n] - '0';
	val = val + (s[n - 1] - '0') * 2;

	// If val == 0 the xor from
	// 1 to n will be n itself
	if (val == 0) {
		return s;
	}
	else if (val == 1) {
		// If val ==	 the xor from
		// 1 to n will be 1 itself
		s = '1';
		return s;
	}
	else if (val == 2) {
		// If val == 2 the xor from
		// 1 to n will be n+1 itself
		return (ad(s));
	}
	else if (val == 3) {
		// If val == 3 the xor from
		// 1 to n will be 0 itself
		s = '0';
		return s;
	}
}
// Function to find the xor of two
// binary string
string final_xor(string L, string R)
{
	// Using loop to equalise the size
	// of string L and R
	while (L.size() != R.size()) {
		L = '0' + L;
	}
	string ans = "";
	for (int i = 0; i < L.size(); i++) {
		// If ith bit of L is 0 and
		// ith bit of R is 0
		// then xor will be 0
		if (L[i] == '0' && R[i] == '0') {
			ans += '0';
		}
		else if (L[i] == '0' && R[i] == '1'
				|| L[i] == '1' && R[i] == '0') {
			// If ith bit of L is 0 and
			// ith bit of R is 1 or
			// vice versa then xor will be 1
			ans += '1';
		}
		else {
			// If ith bit of L is 1 and
			// ith bit of R is 1
			// then xor will be 0
			ans += '0';
		}
	}
	return ans;
}

// Function to find xor from L to R
string xorr(string L, string R)
{
	// changing L to L - 1
	L = sub(L);

	// Finding xor from 1 to L - 1
	L = xor_finder(L);

	// Finding xor from 1 to R
	R = xor_finder(R);

	// Xor of 1, 2, ..., L-1 and 1, 2, ...., R
	string ans = final_xor(L, R);

	return ans;
}

// Driver Code
int main()
{
	// Given Input
	string L = "10", R = "10000";

	// Function Call
	cout << xorr(L, R) << endl;
	return 0;
}
