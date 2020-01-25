#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	int a, b, c;
	double x1_a, x1_b, x2_a, x2_b;
	bool neg = false;
	cin >> a >> b >> c;
	int delta = b * b - 4 * a * c;
	if (delta < 0) {
		delta = 0 - delta;
		neg = true;
	}
	if (neg == false) {
		x1_a = (-b - sqrt(double(delta))) / (double)(2 * a);
		x2_a = (-b + sqrt(double(delta))) / (double)(2 * a);
		cout << "x1=" << setiosflags(ios::fixed) << setprecision(2) << x1_a << endl;
		cout << "x2=" << setiosflags(ios::fixed) << setprecision(2) << x2_a << endl;
	}
	if (neg == true) {
		x1_a = (double)(-b) / (double)(2 * a);
		x2_a = x1_a;
		x1_b = -sqrt(double(delta)) / (double)(2 * a);
		x2_b = sqrt(double(delta)) / (double)(2 * a);
		if (b != 0) { //the real part exists
			cout << "x1=" << setiosflags(ios::fixed) << setprecision(2) << x1_a << setiosflags(ios::fixed) << setprecision(2) << x1_b << "i" << endl;
			cout << "x2=" << setiosflags(ios::fixed) << setprecision(2) << x1_a << "+" << setiosflags(ios::fixed) << setprecision(2) << x2_b << "i" << endl;
		}
		else {
			cout << "x1=" << setiosflags(ios::fixed) << setprecision(2) << x1_b << "i" << endl;
			cout << "x2=" << setiosflags(ios::fixed) << setprecision(2) << x2_b << "i" << endl;
		}
	}

	return 0;
}