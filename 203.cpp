/*************************************************************************
    > File Name: 203.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月26日 星期四 16时36分56秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
bool la(int x, int y) {
	return x > y;
}

int main() {
	int m, n, que[10][10], a[100];
	cin >> m >> n;
	int k = 0;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++) {
			cin >> que[i][j];
			a[k] = que[i][j];
			k++;
		}
	}
	for (int i = 0; i < n; i++) {
		int mmax = 0;
		for (int j = 0; j < m; j++) {
			if (que[j][i] > mmax) mmax = que[j][i];
		}
		cout << mmax << endl;		
	}
	sort(a, a + m * n, la);
	int sum = 0;
	for (int i = 0; i < m * n; i++) {
		sum += a[i];
		if (i) cout << " ";
		cout << a[i];
	}
	cout << endl;
	double avg = (double)sum / (double)(n * m);
	if ((int)(avg * 10) % 10 > 4) avg += 1;
	int avgg = (int)avg;
	cout << avgg << endl;
	int sum1 = 0;
	for (int i = 0; i < n * m; i++)
		if (a[i] >= avgg) sum1++;
	cout << sum1;
}
