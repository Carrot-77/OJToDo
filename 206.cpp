/*************************************************************************
    > File Name: 206.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月26日 星期四 18时05分26秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define N 30
int main() {
	int n, m;
	double a[N][N];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	double sum[N] = {0};
	cout.setf(ios::fixed);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			sum[i] += a[j][i];
		if (i) cout << endl;
		cout << (int)sum[i];
	}
}
