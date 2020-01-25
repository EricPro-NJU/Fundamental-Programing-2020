#include <iostream>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int a = m, b = n, r = n;
	while (a % b) {
		r = a % b;
		a = b;
		b = r;
	}
	m /= r;
	n /= r;
	cout << m << "/" << n;
	return 0;
}