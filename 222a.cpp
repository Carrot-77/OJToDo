/*************************************************************************
    > File Name: 222a.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月02日 星期四 16时19分01秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define N 10000
typedef long long  int1;
int a[N + 5], ma[4 * N];

void updata(int1 root) {
	ma[root] = max(ma[root << 1], ma[root << 1 | 1]);
}



void build (int1 root, int1 l, int1 r, int1 i, int1 val) {
	if (l == r) {
		ma[root] = val;
		return ;
	}
	int1 mid = (l + r) / 2;
	if (i <= mid) build(root * 2, l, mid, i, val);
	else build(root * 2 + 1, mid + 1, r, i, val);
	updata(root);
}

int1 findmax(int1 root, int1 l, int1 r, int1 x, int1 y) {
	if (l >= x && r <= y) return ma[root];
	int1 mid = (l + r) >> 1, res = 0;
	if (x <= mid) res = max(findmax(root * 2, l, mid, x, y), res);
	if (y > mid) res = max(findmax(root * 2 + 1, mid + 1, r, x, y), res);
	return res;
}

int main() {
	int1 n, m;
	cin >> n >> m;
	for (int1 i = 1; i <= n; i++) {
		cin >> a[i];
		build(1, 1, n, i, a[i]);
	}
	int1 ans[m * 10], k = 0;	
	for (int1 i = 0; i < m; i++) {
		int1 dj, x, y;
		cin >> dj >> x >> y;
		if (dj == 1)  {
			build(1, 1, n, x, y);
		}else{
			//cout << findmax(1, 1, n, x, y) << endl;
			ans[k] = findmax(1, 1, n, x, y);
			k++;
		}
	}
	
	for (int1 i = 0; i < k; i++) {
		cout << ans[i] << endl;
	}
	
	
	
}
