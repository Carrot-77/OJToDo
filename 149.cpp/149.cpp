#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int k;
	for (int i = s.length() - 1; i >= 0; i--){ 
		if(s[i] == ' ') {
			cout << s.length() - 1 - i;
			break;
		}
		else if (i == 0) cout << s;
	}
}
