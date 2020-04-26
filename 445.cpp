/*************************************************************************
    > File Name: 445.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月03日 星期五 12时17分32秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 1000

int f1(int x, int *a) {
	int sum = 0;
	for (int i = 0; i < x; i++) {
		if (a[i] > a[x]) sum++;
	}
	return sum;
}

int f2(int x, int *a, int n) {
	int sum = 0; 
	for (int i = x + 1; i < n; i++) {
		if (a[i] > a[x]) sum++;
	}
	return sum;
}
int main() {
	int a[maxn + 5], n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) {
		if (f1(i, a) == f2(i, a, n)) sum++;
	}
	cout << sum;
}
