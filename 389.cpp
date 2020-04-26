/*************************************************************************
    > File Name: 389.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月08日 星期三 20时51分23秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int m, n;
int num[100005], mmax;

int func2(int len) {
	int cnt = 1, now = 0;
	for (int i = 1; i < n; i++) {
		if (num[i] -num[now] >= len) {
			cnt++;
			now = i;
		}
	}
	return cnt;
}

int func() {
	int l = 0, r = mmax;
	while (l != r) {
		int mid = (l + r + 1) / 2;
		int cnt = func2(mid);
		if (cnt >= m) {
			l = mid;
		} else {
			r = mid - 1;
		}
	}
	return l;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n);
	mmax = num[n - 1];

	cout << func() << endl;
	return 0;
}
