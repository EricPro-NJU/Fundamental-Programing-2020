#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n == 1) cout << 1;
	else if (n == 2)cout << 2;
	else {
		long long a = 1, b = 2, c;
		for (int i = 3; i <= n; i++) {
			c = a + b;
			a = b;
			b = c;
		}
		cout << c;
	}
	return 0;
}