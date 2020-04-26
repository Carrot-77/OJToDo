/*************************************************************************
    > File Name: 202.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月26日 星期四 16时03分58秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define max 1000

void f(int *a, int *b, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j + 1] < a[j]) {
				swap(a[j], a[j + 1]);
				swap(b[j], b[j + 1]);
			}
		}
	}
}
int main() {
	int n, a[max + 5],b[max + 5];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = i;
	}
	f(a, b, n);
	

	for (int i = 0; i < n; i++) {
		if (i) cout << " ";
		cout << b[i] + 1;
	}
}
