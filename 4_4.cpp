#include<iostream>

using namespace std;

class Solution {
	public:
		int divide(int dividend, int divisor);
}; 

int Solution :: divide(int dividend, int divisor) {
	
	bool neg1 = false, neg2 = false;
	int count = 0;
	if (divisor == 0) {
		return 2147483647;
	}
	
	if (dividend < 0) {
		dividend = - dividend;
		neg1 = true;
	}
	
	if (divisor < 0) {
		divisor = - divisor;
		neg2 = true;
	}
	
	while (dividend - divisor >= 0) {
		count++;
		dividend -= divisor;
	}
	
	if (neg1 && neg2) return count;
	else if (neg1 || neg2) return -count;
	else return count;
	
}

int main() {
	Solution s;
	int dividend, divisor;
	cin >> dividend >> divisor;
	cout << s.divide(dividend,divisor) << endl;
	
	return 0;
}


