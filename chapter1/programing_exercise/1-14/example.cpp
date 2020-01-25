#include <iostream>
using namespace std;

int main() {
	int n, h, fh, extra = 0, reach = 0;
	cin >> n >> h;
	for (int i = 1; i <= n; i++) {
		cin >> fh;
		if (fh <= h) reach++;
		else {
			extra = ((fh - h) > extra ? (fh - h) : extra);
		}
	}
	cout << reach << endl << extra;
	return 0;
}