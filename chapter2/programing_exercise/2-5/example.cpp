#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n;
	double x;
	cin >> n;
	cin >> x;
	double sum = 1.0, term = 1.0;
	for (int i = 1; i <= n; i++) {
		term = term * x;
		term = term / (double)i;
		sum += term;
	}
	cout << setiosflags(ios::fixed) << setprecision(3) << sum;
	return 0;
}