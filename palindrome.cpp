#include <iostream>
using namespace std;
// string banned
int reverseInteger(int a) {
	int rev = 0;
	while (a != 0) {
		int digit = a % 10;
		rev = rev * 10 + digit;
		a /= 10;
	}
	return rev;
}
int main () {
	int x;
	cin >> x;
	int k = x;
	if (x < 0) cout << "false";
	else if (reverseInteger(x) == k) cout << "true";
	else cout << "false";
	return 0;
}
