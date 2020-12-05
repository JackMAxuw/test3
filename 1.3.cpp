#include<iostream>
using namespace std;

int main() {
	int n, x = 1, y;

	cout << "Enter n\n";
	cin >> n;
	if (n >= 2)
		cout << "2 ";
	for (y = 2; y <= n; y++) {
		for (x = 2; x <= y; x++) {
			if (y % x == 0)
				break;
			else if (y == x + 1)
				cout << y << " ";
			}
	}
}