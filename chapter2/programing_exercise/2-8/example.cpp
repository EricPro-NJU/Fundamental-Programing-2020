#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	for (int i = 2; i <= 10000; i++) {
		int sum = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) sum += j;
		}
		if (sum == i) cout << i << endl;
	}
	return 0;
}