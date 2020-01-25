#include <iostream>
#include <iomanip>
#include <cmath>
#define EPS 1e-7
using namespace std;
int main() {
	double a;
	cin >> a;
	double x1 = a - 1, x2 = a;
	while (fabs(x1-x2) >= EPS) {
		x1 = x2;
		x2 = (2 * x1 + a / (x1 * x1)) / 3.0;
	}
	cout << setiosflags(ios::fixed) << setprecision(2) << x2;
	return 0;
}