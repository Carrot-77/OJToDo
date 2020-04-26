/*************************************************************************
    > File Name: 325.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月26日 星期日 18时30分13秒
 ************************************************************************/

#include <iostream>
#include <map>
#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
#define maxn 10000
int fa[maxn + 5], val[maxn + 5];

void init(int n) {
	for (int i = 1; i <= n; i++) {
		fa[i] = i;
		val[i] = 0;
	}
}

int get(int x) {
	if (x == fa[x]) return x;
	int root = get(fa[x]);
	val[x] += val[fa[x]];
	return fa[x] = root;
}

int merge(int x, int y, int t) {
	int a = get(x), b = get(y);
	if (a == b) {
		return (val[x] - val[y] - t) % 2 == 0;
	}
	fa[a] = b;
	val[a] = (t + val[y] - val[x] + 2) % 2;
	return 1;
}

map<int, int> ind;
int ind_cnt = 0;

struct Data {
	int x, y;
	string t;
} arr[maxn + 5];

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> arr[i].x >> arr[i].y >> arr[i].t;
		arr[i].y += 1;
		ind[arr[i].x] = 0;
		ind[arr[i].y] = 0;
	}
	for (auto iter = ind.begin(); iter != ind.end(); iter++) {
		iter->second = (++ind_cnt);
	}
	init(ind_cnt);

	for (int i = 0; i < m; i++) {
		//cout << ind[arr[i].x] << " " << ind[arr[i].y] << endl;
		if (merge(ind[arr[i].x], ind[arr[i].y], arr[i].t[0] == 'o')) continue;
		cout << i << endl;
		return 0;
	}
	cout << m << endl;
	return 0;
}
