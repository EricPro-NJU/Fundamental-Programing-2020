#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n;
	cin >> n;
	double c, s;
	double c_all = 0, s_all = 0;
	int flag = 1;
	for (int i = 1; i <= n; i++) {
		cin >> c >> s;
		if (s < 60) {
			flag = 0;
		}
		c_all += c;
		s_all += c * s;
	}
	if (flag == 0) {
		cout << "Failed";
	}
	else {
		double gpa = s_all / c_all;
		gpa /= 20.0;
		cout << setiosflags(ios::fixed) << setprecision(2) << gpa;
	}

	return 0;
}

