/*************************************************************************
    > File Name: 49.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年02月09日 星期日 19时42分28秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define maxn 100000

int val, n;
int va[maxn + 5], we[maxn + 5], sa[maxn + 5];
int dp[maxn + 5] = {0};

void ZeroOneBag (int w, int v) {
	for (int i = val; i >= w; i--)
		dp[i] = max(dp[i], dp[i - w] + v);
}

void ComBag (int w, int v) {
	for (int i = w; i <= val; i++)
		dp[i] = max(dp[i], dp[i - w] + v);
}

void MultBag(int w, int v, int s) {
	if (val <= s * w) {
		ComBag(w, v);
		return ;
	} else {
		int k = 1;
		while (k <= s) {
			ZeroOneBag(k * w, k * v);
			s -= k;
			k *= 2;
		}
		ZeroOneBag(s * w, s * v);
	}
}

int main() {
	cin >> val >> n;
	for (int i = 0; i < n; i++) {
		cin >> we[i] >> va[i] >> sa[i];
		MultBag(we[i], va[i], sa[i]);
	}
	cout << dp[val] << endl;
	return 0;
}
