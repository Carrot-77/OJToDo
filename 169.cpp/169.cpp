#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct srcc{
	char a;
	int b;
}scr[26];

int main() {
	int n;
	cin >> n;
	int i = 0; char a0; int b0;
	while (i < n) {
		cin >> a0; scr[i].a = tolower(a0);
		cin >> b0; scr[i].b = tolower(b0);
		i++;
	}
	string paw;
	cin >> paw;
	int sum = 0;
	for (int j = 0; j < paw.length(); j++) {
		paw[i] = tolower(paw[i]);
		for (int m = 0; m < n; m++) {
			if (paw[i] == scr[j].a) {
				sum += scr[j].b;
				cout << sum << " ";
			}
		}
	}
	cout << endl;
	cout << sum;
}


