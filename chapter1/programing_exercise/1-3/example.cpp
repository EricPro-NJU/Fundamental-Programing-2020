#include <iostream>
using namespace std;
int main() {
	char ch;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') {
		ch = ch - 'a' + 'A';
	}
	else {
		ch = ch - 'A' + 'a';
	}
	cout << ch;
	return 0;
}