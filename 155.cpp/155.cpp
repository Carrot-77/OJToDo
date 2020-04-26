#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[31];
	a[0] = 3;
	cout << a[0] << endl;
	int sum = 3;
	for (int i = 1; i < n; i++) {
		a[i] = a[i - 1] + 2 * i;
		sum += a[i];
		cout << a[i] << endl;
	}
	cout << sum;
	return 0;
}

