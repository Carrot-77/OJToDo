/*************************************************************************
    > File Name: 77.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月15日 星期三 17时30分17秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 1000000

int main() {
	int m, n, ans[maxn + 5] = {0};
	cin >> m >> n;
	if (m == 10) {
		ans[0] = 2; 
		ans[1] = 0;
		ans[2] = 1;
	} else {
		ans[0] = 1;
		ans[1] = m;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= ans[0]; j++) {
			ans[j] *= m;
		}
		for (int j = 1; j <= ans[0]; j++) {
			if (ans[j] < 10) continue;
			ans[j + 1] += ans[j] / 10;
			ans[j] %= 10;
			ans[0] += (j == ans[0]);
		}
	}
	for (int i = ans[0]; i >= 1; i--) cout << ans[i];
}
