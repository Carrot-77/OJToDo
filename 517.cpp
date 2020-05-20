/*************************************************************************
    > File Name: 517.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年05月20日 星期三 19时42分40秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int n, ans;

int main() {
	cin >> n;
	for (int i = 1; i <= n / 3; i++) {
		for (int j = i; j <= (n - i) / 2; j++) {
			int y = n - i - j;
			if(i + j > y) {
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}


