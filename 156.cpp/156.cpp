#include<iostream>
#include<math.h>

using namespace std;

int ans1(int i) {
	for (int x = 2; x < i; x++) {
		if (i % x == 0) return 0;
		else if (x == i / 2) {
			return 1;
			break;
		}
	}
}
int ans2(int i) {
	if (sqrt((double)i) == (int)sqrt(i)) return 1;
	else return 0;

}
int main() {
	int a, b;
	int k = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (ans1(i) == 1 && ans2((i / 1000) * 10 + (i % 1000 / 100)) == 1 && ans2(i % 100) == 1) {
			k++;
			if (k > 1) cout << " ";
			cout << i;

		}
	}
	cout << endl;
	cout << k;
}
