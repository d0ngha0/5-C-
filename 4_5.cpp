#include<iostream>

using namespace std;

class express {
	public:
		long long ex_pow(long long a, long long n);
}; 

long long express :: ex_pow (long long a, long long n) { //为什么只改递归函数的返回值不可以， 
							// 而要将所有有关变量的类型都改成 long long 
	if (n == 0) return 1;
	
	if (n % 2 == 1) {
		return (ex_pow(a,(n - 1) / 2) * ex_pow(a,(n - 1) / 2) * a) % 10007;		
	}
	
	else {
		return (ex_pow(a,(n) / 2) * ex_pow(a,(n) / 2) ) % 10007;	
	}
}

int main() {
	express s;
	long long a,n;
	cin >> a >> n;
	cout << s.ex_pow(a,n) << endl;
}


