#include <iostream>
using namespace std;
int main() {
	int m, d;
	int p = 0;
	cin >> m >> d;
	for (int i = 1; i < m; i++) {
		switch (i) {
		case 1: case 3: case 5: case 7: case 8:
		case 10: case 12:
			p += 31; break;
		case 4: case 6: case 9: case 11:
			p += 30; break;
		case 2: p += 29; break; //2020 is a leap year
		}
	}
	p += d;
	int w = (2 + p) % 7;
	switch (w) {
	case 0: cout << "Sunday"; break;
	case 1: cout << "Monday"; break;
	case 2: cout << "Tuesday"; break;
	case 3: cout << "Wednesday"; break;
	case 4: cout << "Thursday"; break;
	case 5: cout << "Friday"; break;
	case 6: cout << "Saturday"; break;
	}
	return 0;
}