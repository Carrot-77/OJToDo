/*************************************************************************
    > File Name: 237.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年03月11日 星期三 19时51分28秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int n, num[15], cnt, mark[15];

void f(int left) {
	if (left == 0) {
		for (int i = 0; i < cnt; i++) {
			if (i) cout << " ";
			cout << num[i];
		}
		cout << endl;
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (mark[i] == 0) {
			mark[i] = 1;
			num[cnt] = i;
			cnt++;
			f(left - 1);
			cnt--;
			mark[i] = 0;
		}
	}
}

int main() {
	cin >> n;
	f(n);
	return 0;
}
