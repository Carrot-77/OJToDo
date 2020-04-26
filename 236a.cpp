/*************************************************************************
    > File Name: 236a.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年03月11日 星期三 19时42分57秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
int n, m, num[15], cnt;

void f(int s, int left) {
	if (left == 0) {
		for (int i = 0; i < cnt; i++) {
			if (i) cout << " ";
			cout << num[i];
		}
		cout << endl;
		return;
	}
	for (int i = s; i <= n - left + 1; i++) {
		num[cnt] = i;
		cnt++;
		f(i + 1, left - 1);
		cnt--;
	}
}

int main() {
	cin >> n >> m;
	f(1, m);
	return 0;
}
