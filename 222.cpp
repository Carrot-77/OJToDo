/*************************************************************************
    > File Name: 222.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月30日 星期一 10时00分22秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<cstring>
#include<algorithm>
#include<iomanip>
using namespace std;
#define N 10000
int arr[N];
int ma[N * 4 + 5], mi[4 * N + 5];
int num[N * 4 + 5] = {0};
int lazy[N * 4 + 5] = {0};

void push_up(int root) {
	num[root] = num[root * 2 + 1] + num[root * 2];
}

void build(int l, int r, int root) {
	if (l == r) {
		ma[root] = arr[l];
		mi[root] = arr[l];
		num[root] = arr[l];
		return;
	}
	int mid = (l + r) / 2;
	build(l, mid, root * 2);
	build(mid + 1, r, root * 2 + 1);
	push_up(root);
	ma[root] = max(ma[root * 2], ma[root * 2 + 1]);
	mi[root] = min(mi[root * 2], mi[root * 2 + 1]);
}

void upgrade(int p, int val, int l, int r, int root) {
	if (l == r) {
		num[root] = val;
		arr[root] = val;
		return;
	}
	int mid = (l + r) / 2;
	if (p > mid) upgrade(p, val, mid + 1, r, root * 2 + 1);
	else upgrade(p, val, l, mid, root * 2);
	push_up(root);
}

int findmax(int x, int y, int l, int r, int root) {
	cout << "root: " << root << endl;
	cout << "l: " << l << " r: " << r << endl;
	cout << "x: " << x << " y: " << y << endl;
	if ((x <= l) && (y >= r)) 
		return ma[root];
	int mid = (l + r) / 2;
	cout << "mid:" << mid << endl;
	int res = 0;
	if (x <= mid)  {
		cout << " x <= mid" << endl;
		res = max(res, findmax(x, y, l, mid, root * 2));
	}
	if (y > mid) {
		cout << " y > mid" << endl;
		res = max(res, findmax(x, y, mid + 1, r, root * 2 + 1));
	}
	
	return res;
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	cout << endl;
	int ans[N * 10];
	build(1, n, 1);
	for (int i = 1; i < n * 4; i++) {
		cout << num[i] << " ";
	}
	cout << "new" << endl;
	int k = 0;
	for (int i = 0; i < m; i++) {
		int a, x, y;
		cin >> a >> x >> y;
		cout << endl;
		if (a == 1)  {
			upgrade(x, y, 1, n, 1);
			for (int i = 1; i < 4 * n; i++)
				cout << num[i] << " ";
		}else {
			ans[k] = findmax(x, y, 1, n, 1);
			k++;
		}
	}
	cout << "max:" << endl;
	for (int i = 0; i < k; i++) {
		cout << ans[k] << endl;
	}
}
