#include<iostream>

using namespace std;

class Solution {
	public:
		int divide(int dividend, int divisor);
}; 

int Solution :: divide(int dividend, int divisor) {
	
	bool neg = false;
	int count = 0;
	if (divisor == 0) {
		return INT_MAX;
	}
	
	if (dividend < 0) {
		dividend = - dividend;
		neg = true;
	}
	
	else if (divisor < 0) {
		divisor = - divisor;
		neg = true;
	}
	
	while (dividend - divisor >= 0) {
		count++;
		dividend -= divisor;
	}
	
	if (neg) return -count;
	else return count;
	
}

int main() {
	Solution s;
	int dividend, divisor;
	cin >> dividend >> divisor;
	cout << s.divide(dividend,divisor);
	
	return 0;
}


