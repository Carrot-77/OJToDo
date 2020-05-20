/*************************************************************************
    > File Name: 519.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年05月20日 星期三 20时47分57秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

long long l, r, ans;

int main() {
	cin >> l >> r;
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			if (i == j) continue;
			for (int k = 3; k <= 17; k++) {
				for (int x = 1; x <= k; x++) {
					if (j == 0 && x == 1) continue;
					if (i == 0 && x != 1) break;
					long long t = 0;
					for (int m = 1; m <= k; m++) {
						if (m != x) {
							t = t * 10 + i;
						} else {
							t = t * 10 + j;
						}
					}
					if (t >= l && t <= r) ans++;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
