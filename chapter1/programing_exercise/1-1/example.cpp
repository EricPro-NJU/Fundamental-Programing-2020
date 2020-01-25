#include <iostream>
using namespace std;
int main() {
	int n;
	int count = 0;
	cin >> n;
	if (n % 3 == 1)
		count++;
	if (n % 2 == 0)
		count++;
	if (n >= 10 && n <= 99)
		count++;
	if (n % 2 == 0 && n % 3 == 0)
		count++;
	if (n * n - 10 * n + 21 > 0)
		count++;
	if ((n % 10) % 4)
		count++;
	cout << count;
	return 0;
}