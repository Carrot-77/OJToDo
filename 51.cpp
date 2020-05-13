/*************************************************************************
    > File Name: 51.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年05月12日 星期二 20时10分32秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
#define maxn 1000
int f[maxn + 5];
int a[maxn + 5];//向下数连续白色格子数量
int s[maxn + 5], top = -1;

int main() {
	int n, m, ans = 0;
	cin >> n >> m;
	a[m + 1] = -1;
	f[m + 1] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1, val; j <= m; j++) {
			cin >> val;
			if (val == 1) a[j] += 1;
			else a[j] = 0;
		}
		top = -1;
		s[++top] = m + 1;
		for (int j = m; j >= 1; j--) {
			while (a[s[top]] >= a[j]) top--;
			f[j] = (s[top] - j) * a[j] + f[s[top]];
			f[j] %= 100007;
			s[++top] = j;
			ans += f[j];
			ans %= 100007;
		}
	}
	cout << ans << endl;	
	return 0;
}
