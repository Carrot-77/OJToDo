/*************************************************************************
    > File Name: 221.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月30日 星期一 09时07分57秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define N 100000
struct stu {
	int a;
	int num;
	int sum;
}st[N + 5];

bool cmp (stu x, stu y) {
	return x.a < y.a;
}

bool cmp0 (stu x, stu y) {
	return x.num < y.num;
}

int main() {
	int n, m;
	int b[N + 5];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> st[i].a;
		st[i].num = i;
		st[i].sum = 0;
	}
	for (int i = 0; i < m; i++) 
		cin >> b[i];
	sort(st, st + n, cmp);
	sort(b, b + m);
	int k = 0;
	for (int i = 0; i < n; i++) {
		while (b[k] <= st[i].a && k < m) {
			st[i].sum += 1;
			k++;
		}
	}
	sort(st, st + n, cmp0);
	for (int i = 0; i < n; i++) {
		if (i) cout << endl;
		cout << st[i].sum;
	}
}
