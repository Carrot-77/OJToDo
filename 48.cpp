/*************************************************************************
    > File Name: 48.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年02月09日 星期日 19时31分48秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define maxn 10000

int n, val;
int c[maxn + 5], v[maxn + 5];
int dp[maxn + 5] = {0};

int main() {
	cin >> n >> val;
	for (int i = 0; i < n; i++)
		cin >> c[i] >> v[i];
	for (int i = 0; i < n; i++) {
		for (int j = val; j >= c[i]; j--) {
			for (int k = 1; k <= j / c[i]; k++)
				dp[j] = max(dp[j], dp[j - k * c[i]] + k * v[i]);
		}
	}
	cout << dp[val] << endl;
	return 0;

}
