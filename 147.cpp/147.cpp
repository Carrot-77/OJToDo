#include<iostream>
#include<cstring>
using namespace std;

int main() {
	string a;
	cin >> a;
	if(a[a.length()-1] % 2 == 0) cout << "YES";
	else cout << "NO";
}
