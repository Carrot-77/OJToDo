/*************************************************************************
    > File Name: 205.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月26日 星期四 17时01分37秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
	int n, m, a[30][30];
	int sum[30] = {0};
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			sum[i] += a[i][j];
		}
	}
	for (int i = 0; i < n; i++){
		if (i) cout << endl;
		cout.setf(ios::fixed);
		cout << setprecision(6) << (double)sum[i] / (double)m;
	}
}
