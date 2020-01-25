#include <iostream>
using namespace std;
int main() {
	int n;
	char ch;
	int low = 0, high = 0, nums = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> ch;
		if (ch >= 'a' && ch <= 'z') low++;
		else if (ch >= 'A' && ch <= 'Z') high++;
		else if (ch >= '0' && ch <= '9') nums++;
	}
	cout << low << " " << high << " " << nums;
	return 0;
}