#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int n;
	cin >> n;
	int sum = 0;
	string a;
	string ans;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a.length() > sum){
			sum = a.length();
			ans = a;
		}	
	}
cout << ans;	
}
