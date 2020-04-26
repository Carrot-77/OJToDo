#include<iostream>
using namespace std;
int main() {
	char a;
	cin >> a;
	int n = (int)a - 64;
	int x = n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) cout << " ";
		for (int j = 1; j <= x; j++) {
			cout << (char)a;
			if (j != x) --a;
		}
		for (int j = 1; j < x; j++) {
			cout << (char)a;
			if (j != x - 1) ++a;
		}
		cout << endl;
		x--;
	}
	return 0;
}
