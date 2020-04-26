/*************************************************************************
    > File Name: 83.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月22日 星期三 14时37分25秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
int dp[101][9] = {0};

void f(int n, int m) {
	dp[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i >= j) 
				dp[i][j] = dp[i - j][j] + dp[i - 1][j - 1];
		}
	}
	return ;
}
int main() {
	int n, m, ans;
	cin >> n >> m;
	f(n, m);
	cout << dp[n][m] << endl;
}
