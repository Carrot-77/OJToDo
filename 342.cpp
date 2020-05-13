/*************************************************************************
    > File Name: 342.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年05月12日 星期二 20时48分24秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

void solve(long long k) {
	long long a[5] = {0};
	for (long long i = 0; i < k; i++) {
		cin >> a[i];
	}
	long long f[a[0] + 1][a[1] + 1][a[2] + 1][a[3] + 1][a[4] + 1];
	memset(f, 0, sizeof(f));
	f[0][0][0][0][0] = 1;
	for (long long i1 = 0; i1 <= a[0]; i1++) {
	for (long long i2 = 0; i2 <= a[1]; i2++) {
	for (long long i3 = 0; i3 <= a[2]; i3++) {
	for (long long i4 = 0; i4 <= a[3]; i4++) {
	for (long long i5 = 0; i5 <= a[4]; i5++) {
		long long val = f[i1][i2][i3][i4][i5];
		if (i1 + 1 <= a[0] && i1 >= i2 && i1 >= i3 && i1 >= i4 && i1 >= i5) 
			f[i1 + 1][i2][i3][i4][i5] += val;
		if (i2 + 1 <= a[1] && i2 >= i3 && i2 >= i4 && i2 >= i5) 
			f[i1][i2 + 1][i3][i4][i5] += val;
		if (i3 + 1 <= a[2] && i3 >= i4 && i3 >= i5) 
			f[i1][i2][i3 + 1][i4][i5] += val;
		if (i4 + 1 <= a[3] && i4 >= i5) 
			f[i1][i2][i3][i4 + 1][i5] += val;
		if (i5 + 1 <= a[4]) 
			f[i1][i2][i3][i4][i5 + 1] += val;
	}}}}}
	cout << f[a[0]][a[1]][a[2]][a[3]][a[4]] << endl;
	return ;
}

int main() {
	long long k;
	while (cin >> k) {
		if (k == 0) break;
		solve(k);
	}
	return 0;
}
