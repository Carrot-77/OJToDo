#include<iostream>

using namespace std;

int gacd(int a, int b, int &x, int &y) {
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	else {
		int ans = gacd(b, a % b, x, y);
		int t = x - a / b * y;
		x = y;
		y = t;
		return ans;
	}
}
int main() {
	int a, b, x, y;
	cin >> a >> b;
	gacd(a, b, x, y);
	if (x < 0) x += b;
	cout << x;
}

