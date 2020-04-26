#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a = n - i + 1;
		for (int j = 1; j <= n - i + 1; j++) {
			cout << a;
			a--;
			if (j != n - i + 1) cout << " ";
		}
		cout << endl;
	}
	return 0;
}
