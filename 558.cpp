/*************************************************************************
    > File Name: 558.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月26日 星期日 14时47分52秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int t, m;
int tim[1005], mum[1005], ans[1000005];

void f1() {
	for (int i = 0; i < m; i++) {
		for (int j = t; j >= tim[i]; j--) {
			ans[j] = max(ans[j], ans[j - tim[i]] + mum[i]);
		}
	}
	return;
}

int main() {
	cin >> t >> m;
	for (int i = 0; i < m; i++) {
		cin >> tim[i] >> mum[i];
	}
	f1();
	cout << ans[t] << endl;
	return 0;
}
