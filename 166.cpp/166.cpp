#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string a, b;
	cin >> a;
	int n;
	cin >> n;
	cin >> b;
	if (a.length() > 100) cout << "100" << endl;
	else cout << a.length() << endl;
	for (int i = 0; i < a.length() + b.length(); i++) {
		if (i < n - 1) cout << a[i]; //x[i] = a[i];
		else if (i < n - 1 + b.length()) cout << b[i - n + 1]; 
		else cout << a[i + n];//x[i] = a[i + n];
	}
	cout << endl;
	cout << a.length() - n + 2;
}
