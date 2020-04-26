/*************************************************************************
    > File Name: 446.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月02日 星期四 21时18分23秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define maxn 10
int dir[4][2] = {
	{0, 1}, {1, 0}, {0, -1}, {-1, 0}
};
int main() {
	int n, re;
	cin >> n;
	int k = (n + 1) / 2;
	int ans[maxn + 5][maxn + 5];
	for (int i = 1; i <= (n + 1) / 2; i++) {
		ans[i][i] = i;
		int dx = i, dy = i;
		for (int step = 0; step < 4; step++) {
			re = n - i * 2 + 1;
			while (re) {
				dx += dir[step][0];
				dy += dir[step][1];
				ans[dx][dy] = i;
				re--;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j - 1) cout << " ";
			cout << ans[i][j];
		}
		cout << endl;
	}
	return 0;

}
