#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int x = 0;
	int y = 0;
	int k = 64;
	for (int i = 0; i < 2 * n - 1; i++) {
		if (i <= n - 1) {
			for (int j = 1; j <= x; j++) cout << " ";
			for (int j = 1; j <= 2 * ( n - x ) + 1; j++) {
				if(k > 65 + n) k--;
				else k++;
				cout << char(k);
			}
			x++;
			cout << endl;
		}
		else {
			k--;
			for (int j = n - 1; j >= 0; j--) cout << " ";
			for (int j = 3; j >= 2 * n + y; j++) {
				if(j >= 4 + n) k--;
				else k++;
				cout << (char)k;
			}
			y += 1;
			cout << endl;
			
		}
		
		
	}

}
