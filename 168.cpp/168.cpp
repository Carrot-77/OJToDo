#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main() {
	int n;
	string name[101];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> name[i];
	for (int i = 0; i < n; i++) {
		transform(name[i].begin(), name[i].end(), name[i].begin(), ::tolower);
		name[i][0] = toupper(name[i][0]);
	}
	sort(name, name + n);
	for (int i = 0; i < n; i++) cout << name[i] << endl;
}

