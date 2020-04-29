/*************************************************************************
    > File Name: 43.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月29日 星期三 20时23分02秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define N 1000

int val[N + 5][N + 5] = {0};
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> val[i][j];
		}
	}
	for (int i = n - 2; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
			val[i][j] += max(val[i + 1][j], val[i + 1][j + 1]);
		}
	}
	cout << val[0][0];

}
