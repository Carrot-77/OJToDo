/*************************************************************************
    > File Name: 454.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月02日 星期四 18时53分49秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define N 100

int main() {
	int n, a[N + 5], b[N * 10 + 5] = {0}, num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[a[i]] = 1;
	}
	int sum = 0, c[N];
	for (int i = 1; i <= 1000; i++) {
		if (b[i]) {
			c[sum] = i;
			sum++;
		}
	}
	cout << sum << endl;
	for (int i = 0; i < sum; i++) {
		if (i) cout << " ";
		cout << c[i];
	}
}
