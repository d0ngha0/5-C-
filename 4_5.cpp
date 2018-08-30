#include<iostream>

using namespace std;

class express {
	public:
		int ex_pow(int a, int n);
}; 

int express :: ex_pow (int a, int n) {
	
	if (n == 0) return 1;
	
	if (n % 2 == 1) {
		return ex_pow(a,(n - 1) / 2) * ex_pow(a,(n - 1) / 2) * a;		
	}
	
	else {
		return ex_pow(a,(n) / 2) * ex_pow(a,(n) / 2);	
	}
}

int main() {
	express s;
	int a,n;
	cin >> a >> n;
	cout << s.ex_pow(a,n) << endl;
}


