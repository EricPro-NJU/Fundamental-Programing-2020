#include <iostream>
using namespace std;
int main() {
	int i, j, k, count = 0;
	for (i = 0; i <= 10; i++)//i��10Ԫ������j��5Ԫ������k��1Ԫ����
		for (j = 0; j <= 20; j++) {
			k = 100 - 10 * i - 5 * j;
			if (k >= 0) {
				count++;
			}
		}
	cout << count << endl;
	return 0;
}