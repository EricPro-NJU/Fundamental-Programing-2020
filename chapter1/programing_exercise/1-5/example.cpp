#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	int x, y, z;
	cin >> a >> b >> c;
	cin >> x >> y >> z;
	int r1, r2, r3;
	r1 = a + x;
	r2 = b + y;
	r3 = c + z;
	if (r3 >= 10) {
		r3 -= 10;
		r2++;
	}
	if (r2 >= 10) {
		r2 -= 10;
		r1++;
	}
	cout << r1 << " " << r2 << " " << r3;
	return 0;
}