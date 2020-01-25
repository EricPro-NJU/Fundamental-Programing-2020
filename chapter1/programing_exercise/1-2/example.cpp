#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	if (c >= a && c <= b) cout << c;
	else if (c < a) cout << a;
	else cout << b;
	return 0;
}