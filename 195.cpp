/*************************************************************************
    > File Name: 195.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月24日 星期二 16时15分50秒
 ************************************************************************/
#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define N 100000

int f(int *a, int n, int x) {
	int left = 0, right = n - 1, mid;
	while (left < right) {
		mid = (left + right + 1) / 2;
		if (a[mid] > x) {
			right = mid - 1;
		}else if (a[mid] <= x) {
			left = mid;
		}
	}
	return left;
}
int main() {
	int n, m;
	int a[N + 5], b[N + 5];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++) {
		cin >> b[i];
		if (i) cout << " ";
		cout << a[f(a, n, b[i])];

	}
	
}
