/*************************************************************************
    > File Name: 599.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年05月20日 星期三 20时01分57秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int n, t, num[1000005];

int main() {
	cin >> n >> t;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	int l = 0, r = n - 1;
	while (l < r) {
		int sum = num[l] + num[r];
		if (sum == t) {
			cout << l << " " << r << endl;
			return 0;
		}
		if (sum < t) l++;
		else r--;
	}
	return 0;
}
