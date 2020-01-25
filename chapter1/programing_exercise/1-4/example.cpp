#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
	double ti, to;
	char ch;
	cin >> ch;
	cin >> ti;
	if (ch == 'f') {
		to = 5 * (ti - 32) / 9;
	}
	else if (ch == 'c') {
		to = ti * 9 / 5 + 32;
	}
	cout << setiosflags(ios::fixed) << setprecision(1) << to;
	return 0;
}