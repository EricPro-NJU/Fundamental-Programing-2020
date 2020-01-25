#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int r = 1;
	while (r <= n) r *= 2;
	r /= 2;
	while (r >= 1) {
		if (n >= r) {
			cout << "1";
			n -= r;
		}
		else {
			cout << "0";
		}
		r /= 2;
	}
	return 0;
}