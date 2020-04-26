#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	string a[1001];
	cin >> n;
	string chg1 = "Ban_smoking";
	string chg2 = "No_smoking";
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) {
		int x = a[i].find(chg1, 0);
		while (x != -1) {
			a[i] = a[i].replace(x, 11, chg2);
			x = a[i].find(chg1, x + 1);
		}
		cout << a[i] << endl;
	}
}

