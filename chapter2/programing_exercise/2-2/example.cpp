#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int cw = 0, max = 0;
	int s;
	for (int i = 1; i <= n; i++) {
		cin >> s;
		if (s >= 2) cw++;
		else {
			if (cw > max) max = cw;
			cw = 0;
		}
	}
	if (cw > max) max = cw;
	cout << max;
	return 0;
}