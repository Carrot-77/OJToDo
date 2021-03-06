/*************************************************************************
    > File Name: 538.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年03月25日 星期三 18时14分10秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int n, num[25][25], check[25], flag;

void func(int x) {
	if (flag == 1) {
		cout << '-';
	}
	flag = 1;
	cout << x;
	for (int i = 1; i <= n; i++) {
		if (num[x][i] == 1 && check[i] == 0) {
			check[i] = 1;
			func(i);
		}
	}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> num[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		if (check[i] == 0) {
			check[i] = 1;
			func(i);
		}
	}
	return 0;
}
