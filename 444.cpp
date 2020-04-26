/*************************************************************************
    > File Name: 444.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月03日 星期五 11时55分43秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 100

int main() {
	int n, a[maxn + 5], x;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	cin >> x;
	int rex = a[x], rexs, last = a[n];
	for (int i = x; i < n; i++) {
		rexs = a[i + 1];
		a[i + 1] = rex;
		rex = rexs;
	}
	a[x] = last;
	for (int i = 1; i <= n; i++) {
		if (i != 1) cout << " ";
		cout << a[i];
	}
}
