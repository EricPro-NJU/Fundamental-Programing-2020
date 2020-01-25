#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long a1 = 1, a2 = 1;
	long long a3 = 1;
	for (int i = 3; i <= n; i++) {
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;
	}
	cout << a3;
	return 0;

}
