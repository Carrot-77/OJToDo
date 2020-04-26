/*************************************************************************
    > File Name: 38.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月19日 星期日 16时50分16秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define maxn 10000
int ans[101][maxn + 5] = {0};

void f(int n) {
	ans[1][0] = 1;
	ans[2][0] = 1;
	ans[1][1] = 1;
	ans[2][1] = 2;
	ans[n][0] = 1;
	for (int i = 3; i <= n; i++) {
		for (int j = 1; j <= ans[n][0]; j++) {
			ans[i][j] = ans[i - 2][j] + ans[i - 1][j];
		}
		for (int j = 1; j <= ans[n][0]; j++) {
			if (ans[i][j] < 10) continue;
			ans[i][j + 1] += ans[i][j] / 10;
			ans[i][j] %= 10;
			ans[n][0] += (j == ans[n][0]);
		}
	}
}
int main() {
	int n; 
	cin >> n;
	f(n);
	for (int i = ans[n][0]; i > 0; i--) 
		cout << ans[n][i];
	return 0;
	
}
