#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class Equation{
	private:
		int _a, _b, _c;
	public:
		Equation(int a, int b, int c) {
			_a = a;
			_b = b;
			_c = c;
		}
		
		void solve();
};

void Equation :: solve() {
	if (_a == 0) {
		if (_b == 0) {
			if (_c == 0) cout << 5 << endl;
			else cout << 4 << endl; 
		}
		else {
			cout << 6 << endl;
			cout << fixed << setprecision(2) << _c*1.0 / _b << endl;
		}
	}
	else {
		double delta;
		double st = pow(10, -7);
		delta = pow (_b, 2) - 4 * _a * _c;
		//cout << delta << endl;
		if (delta < st && delta > -st) {
			cout << 2 << endl;
			cout << fixed << setprecision(2) << -(_b / 2*_a) << endl;	
		}
		else if (delta > st) {
			
			double a1, a2, t;
			a1 = ((-_b - sqrt(delta)) / 2*_a);
			a2 = ((-_b + sqrt(delta)) / 2*_a);
			if (a1 > a2) {
				t = a1;
				a1 = a2;
				a2 = t;
			}
			
			cout << 1 << endl;
			cout << fixed << setprecision(2) << a1 << " ";
			cout << fixed << setprecision(2) << a2 << endl;
		}
		else {
			cout << 3 << endl;
		}
	}
		
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	Equation tmp(a, b, c);
	tmp.solve();
}

