/*************************************************************************
    > File Name: 560.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月26日 星期日 15时34分16秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int n, m, w[30], val[30], ans[10000000];

void f1() {
	for (int i = 0; i < m; i++) {
		for (int j = n; j >= w[i]; j--) {
			ans[j] = max(ans[j], ans[j - w[i]] + val[i]);
		}
	}
	return ;
}

int main() {
	cin >> n >> m;
	int x;
	for (int i = 0; i < m; i++) {
		cin >> w[i] >> x;
		val[i] = w[i] * x;
	}
	f1();
	cout << ans[n] << endl;
	return 0;
}
