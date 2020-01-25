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
	if (b > c) {
		int temp = b;
		b = c;
		c = temp;
	}
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	if (a + b <= c) {
		cout << "Invalid";
	}
	else if (a * a + b * b > c* c) {
		cout << "Acute";
	}
	else if (a * a + b * b == c * c) {
		cout << "Right";
	}
	else {
		cout << "Obtuse";
	}
	return 0;
}