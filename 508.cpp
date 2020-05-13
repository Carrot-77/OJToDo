/*************************************************************************
    > File Name: 508.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月28日 星期二 15时59分58秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int n, t[1005];
int ans;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	sort(t, t + n);
	for (int i = n - 1; i >= 0; i -= 2) {
		if (i == 0) {
			ans += t[0];
			break;
		}
		if (i == 1) {
			ans += t[1];
			break;
		}
		if (i == 2) {
			ans += t[0] + t[1] + t[2];
			break;
		}
		ans += min(t[1] + t[0] + t[i] + t[1], t[i] + t[0] + t[i - 1] + t[0]);
	}
	cout << ans << endl;
	return 0;
}
