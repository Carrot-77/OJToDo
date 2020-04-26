#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin >> m >> n;
	int matrix[201][201], a[201][201];
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin >> matrix[i][j];
			a[j][m - 1- i] = matrix[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cout <<  a[i][j];
			if(j != m - 1) cout << " ";
		}
		if(i != n - 1) cout << endl;
	}

}
