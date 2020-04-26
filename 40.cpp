/*************************************************************************
    > File Name: 40a.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月12日 星期日 13时36分57秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 100
int ans[505][maxn + 5];

void f1(int n) {
	int alen = ans[n - 3][0];
	int blen = ans[n - 2][0];
	//cout << "alen = " << alen << endl;
	//cout << "blen = " << blen << endl;
	ans[n][0] = max(alen, blen);
	//cout << "ans[" << n << "][0] = " << ans[n][0] << endl;
	for (int i = 1; i <= ans[n][0]; i++) {
		if (i > alen) ans[n - 3][i] = 0;
		if (i > blen) ans[n - 2][i] = 0;
		//cout << "ans[" << n - 3 << "][" << i << "] = " << ans[n - 3][i] << endl;
		//cout << "ans[" << n - 2 << "][" << i << "] = " << ans[n - 2][i] << endl;
		ans[n][i] = ans[n - 2][i] + ans[n - 3][i];
		//cout << "ans = " << ans[n][i] << endl;
	}
	for (int i = 1; i <= ans[n][0]; i++) {
		if (ans[n][i] < 10) continue;
		ans[n][i + 1] += ans[n][i] / 10;
		ans[n][i] %= 10;
		ans[n][0] += (i == ans[n][0]);
	}
	return ;
}

void f2(int n) {
	ans[1][0] = 0;
	ans[2][0] = 1;
	ans[3][0] = 1;
	ans[4][0] = 1;
	ans[1][1] = 0;
	ans[2][1] = 1;
	ans[3][1] = 1;
	ans[4][1] = 1;
	if (n < 5) return;
	else {
		for (int i = 5; i <= n; i++) {
			f1(i);
		}
	}
	return ;
}

int main() {
	int n;
	cin >> n;
	f2(n);
	if (n == 1) cout << "0";
	else {
		for (int i = ans[n][0]; i >= 1; i--) 
			cout << ans[n][i];
	}
}
