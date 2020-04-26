/*************************************************************************
    > File Name: 326.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月23日 星期四 20时41分29秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 50000
int fa[maxn + 5], val[maxn + 5];
int n;

void init(int n) {
	for (int i = 0; i <= n; i++) {
		fa[i] = i;
		val[i] = 0;
	}
	return;
}

int get(int x) {
	if (x == fa[x]) return x;
	int root = get(fa[x]);
	val[x] += val[fa[x]];
	val[x] %= 3;
	return fa[x] = root;
}

int merge(int x, int y, int t) {
	int a = get(x), b = get(y);
	if (a == b) {
		return (val[x] - val[y] - t) % 3 == 0;
	}
	fa[a] = b;
	val[a] = t + val[y] - val[x] + 3 % 3;
	return 1;
}

int main() {
	int n, k, ans = 0;
	cin >> n >> k;
	init(n);
	for (int i = 0; i < k; i++) {
		int x, y, t;
		cin >> t >> x >> y;
		t -= 1;
		if (x <= n && y <= n && merge(x, y, t)) continue;
		ans += 1;
	}
	cout << ans << endl;
	return 0;
}
