#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++) {
		if ((a[i] > 64 && a[i] < 90) || (a[i] > 96 && a[i] < 122))a[i] = (char)((int)a[i] + 1);
		else if (a[i] == 122) a[i] = 'a';
		else if (a[i] == 90) a[i] = 'A';
	}
	cout << a;
}
