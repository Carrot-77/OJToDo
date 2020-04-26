/*************************************************************************
    > File Name: 393.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月22日 星期三 19时20分34秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int n, k;
double num[10005], mmax;

int check(int mid) {
	int cnt = 0; 
	for (int i = 0; i < n; i++) {
		cnt += num[i] / mid;
	}
	return cnt;
}

double func() {
	double l = 0, r = mmax;
	while (r - l > 0.00001) {
		double mid = (l + r) / 2;
		int x = check(mid);
		if (x >= k) {
			l = mid;
		} else {
			r = mid;
		}
	}
	return l;
}

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		mmax = max(mmax, num[i]);
	}
	double ans = func();
	printf("%d.%d%d\n", (int)ans, (int)(ans * 10) % 10,  (int)(ans * 100) % 10);
	return 0;
}
