/*************************************************************************
    > File Name: 208.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月26日 星期四 18时49分22秒
 ************************************************************************/
#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define N 101

int main() {
	int m, n, a[N], re[N] = {0};
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> a[i];
		re[a[i]]++;
	}
	cin >> n;
	for (int i = 100; i > 0; i--) {
		if (re[i] >= n) {
			cout << re[i] << endl;
			break;
		}
	}

}
