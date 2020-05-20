/*************************************************************************
    > File Name: 518.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年05月20日 星期三 18时24分16秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
int x, ans;

int main() {
	cin >> x;
	int num = 1, day = 0;
	while (1) {
		for (int i = 0; i < num; i++) {
			ans += num;
			day++;
			if (x == day) {
				cout << ans << endl;
				return 0;
			}
		}
		num++;
	}
	return 0;
}
