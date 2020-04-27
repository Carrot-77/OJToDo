/*************************************************************************
    > File Name: 42.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月27日 星期一 19时03分24秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;


long long m, n;
long long mon[25], ans[10005];

int main() {
	cin >> m >> n;
	for (long long i = 0; i < m; i++) {
		cin >> mon[i];
	}
	ans[0] = 1;
	for (long long i = 0; i < m; i++) {
		for (long long j = mon[i]; j <= n; ++j) {
			ans[j] += ans[j - mon[i]];
			ans[j] %= 9973;
		}
	}
	cout << ans[n] << endl;
	return 0;
}
