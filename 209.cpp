/*************************************************************************
    > File Name: 209.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月28日 星期六 13时53分44秒
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
	int n;
	cin >> n;
	double a[N];
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		if (i) cout << endl;
		cout << a[i];
	}
}
