/*************************************************************************
    > File Name: 453.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月02日 星期四 18时40分01秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define N 30000

int main() {
	int n, a[N + 5] = {0}, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int x; 
		cin >> x;
		a[x] = 1;
	}
	int num = 0;
	for (int i = 1; i <= N; i++) {
		if (a[i] == 1) num++;
		if (num == k) {
			cout << i;
			return 0;
		}
	}
	cout << "NO RESULT";
	return 0;
}
