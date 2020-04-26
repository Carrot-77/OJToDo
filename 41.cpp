/*************************************************************************
    > File Name: 41.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月19日 星期日 17时05分22秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 1000000

int ans[maxn + 5] = {0};
int a[maxn + 5] = {0};

void f(int n, int k) {
	a[0] = 1;
	a[1] = k - 1;
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= a[0]; j++) {
			a[j] *= k - 1;
		}
		for (int j = 1; j <= a[0]; j++) {
			if (a[j] < 10) continue;
			a[j + 1] += a[j] / 10;
			a[j] %= 10;
			a[0] += (j == a[0]);
		}
	}
	if (n & 1) {
		a[1] -= k - 1;
		for (int j = 1; j <= a[0]; j++) {
			a[0] -= (0 == a[a[0]]);
			if (a[j] >= 0) continue;
			a[j + 1] -= 1;
			a[j] += 10;
		}
	} else {
		a[1] += k - 1;
		for (int j = 1; j <= a[0]; j++) {
			if (a[j] < 10) continue;
			a[j + 1] += a[j] / 10;
			a[j] %= 10;
			a[0] += (j == a[0]);
		}
	}
}
int main() {
	int n, k;
	cin >> n >> k;
	f(n, k);
	for (int i = a[0]; i > 0; i--)
		cout << a[i];
}

