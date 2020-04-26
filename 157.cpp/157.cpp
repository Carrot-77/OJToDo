#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int x = 0;
	int y = 0;
	int k = 64;
	for (int i = 1; i <= 2 * n; i++) {
		if (i <= n) {
			for (int j = 1; j <= i - 1; j++) cout << " ";
			for (int j = 1; j <= 2 * n - 1 - x; j++) {
				if (j > n + 1 - x / 2) {
					k--;
					cout << char(k);
				}
				else {
					k++;
					cout << char(k);
				}

			}
			x += 2;
			cout << endl;
		}
		else {
			for (int j = n - 1 - y / 2; j > 0; j--) {
				cout << " ";
				if (j == n - 1) k = 63 + n;
			}
			for (int j = 1; j <= 3 + y; j++) {
				if (j <= 2 + y / 2) {
					k++;
					cout << char(k);
				}
				else {
					k--;
					cout << char(k);
					if (j == 3 + y) {
						k -= 2;
						break;
					}
				}

			}
			y += 2;
			cout << endl;
		}
	}
}
