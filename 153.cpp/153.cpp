#include<iostream>

using namespace std;

int main() {
	int year, mon, day;
	cin >> year >> mon >> day;
	if (mon == 1) {
		mon = 13; year--;
	}
	if (mon == 2) {
		mon = 14; year--;
	}
	int q = day, m = mon;
	int j = year / 100;
	int k = year % 100;
	int ans = (q + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
	if (ans == 1) cout << "7";
	else cout << (ans + 6) % 7;
	return 0;
}
