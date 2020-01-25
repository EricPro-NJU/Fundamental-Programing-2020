#include <iostream>
using namespace std;
int main() {
	int i, j, k, count = 0;
	for (i = 0; i <= 10; i++)//i是10元张数，j是5元张数，k是1元张数
		for (j = 0; j <= 20; j++) {
			k = 100 - 10 * i - 5 * j;
			if (k >= 0) {
				count++;
			}
		}
	cout << count << endl;
	return 0;
}