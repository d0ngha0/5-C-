#include<iostream>

using namespace std;

int arr_sum (int *a, int n);

int main() {
	int n,max;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	max = a[0];
	for (int i = 2; i <= n; i++) {
		if (arr_sum(a,i) > max) max = arr_sum(a,i);
	}
	cout << max << endl;
}

int arr_sum (int *a, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}
