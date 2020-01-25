#include <iostream>
using namespace std;
int main() {
	char ch = ' ';
	int total = 0;
	do {
		cin >> ch;
		while (ch == '>') {
			cin >> ch;
			if (ch == '=') {
				total++;
			}
		}
	} while (ch != '#');
	cout << total;
	return 0;
}
