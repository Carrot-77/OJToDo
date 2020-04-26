/*************************************************************************
    > File Name: 236.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年03月11日 星期三 19时24分51秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
int num[11], cnt, n;

void p(int m) {
	for (int i = 0; i < m; i++) {
		if (i) cout << " ";
		cout << num[i];
	}
	cout << endl;
}

void f(int k, int m) {
	for (int i = k; i <= n; i++) {
		num[cnt++] = i;
		if (cnt == m) p(m);
		f(i + 1, m);
		cnt--;
	}
}

int main() {
	int m;
	cin >> n >> m;
	f(1, m);
}
