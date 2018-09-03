#include<iostream>
#include<string>

using namespace std;

int main() {
	char str[3] = "00";
	cin >> str;
	if (str[1] == 0) {
		cout << int(str[0])-64 << endl;
	}  
	else {
		cout << 26 + int(str[1])-64 << endl;
	}
	
	//cout << str << endl;
	
}
