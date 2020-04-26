/*************************************************************************
    > File Name: 443.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月02日 星期四 21时03分43秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 100

int main() {
	int l, m;
	cin >> l >> m;
	int sum = 0;
	int re[maxn * 100 + 5] = {0};
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		for (int i = x; i <= y; i++)
			re[i] = 1;
	}
	for (int i = 0; i <= l; i++) {
		if (!re[i]) sum++;
	}
	cout << sum;
	return 0;

}
