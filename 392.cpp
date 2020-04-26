/*************************************************************************
    > File Name: 392.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月22日 星期三 18时50分01秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int a, b, num[100005], mmin, mmax;

int check(int mid) {
	int cnt = 1, now = 0;
	for (int i = 1; i < a; i++) {
		if (num[i] - num[now] >= mid) {
			cnt++;
			now = i;
		}
	}
	return cnt;
}

int func() {
	int l = 1, r = mmax;
	while (l != r) {
		int mid = (l + r + 1) / 2;
		int cnt = check(mid);
		if (cnt >= b) {
			l = mid;
		} else {
			r = mid - 1;
		}
	}
	return r;
}

int main() {
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> num[i];
	}
	sort(num, num + a);
	mmax = num[a - 1] - num[0];
	cout << func() << endl;
	return 0;
}
