/*************************************************************************
    > File Name: 513.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年05月20日 星期三 18时07分56秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int m, t;

bool is_t(int x, int t) {
	while (x) {
		if (x % 10 == t) return true;
		x /= 10;
	}
	return false;
}

int func(int m, int t) {
	int k = 0;
	for (int i = 1; i <= m; i++) {
		if (is_t(i, t)) continue;
		k++;
	}
	return k;
}

int main() {
	cin >> m >> t;
	cout << func(m, t) << endl;
	return 0;
}
