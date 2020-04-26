/*************************************************************************
    > File Name: 214.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月28日 星期六 18时50分15秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define N 30

bool tmp (int x, int y) {
	return x > y;
}
int main() {
	int n, m, sum = 0;
	cin >> n;
	int a[N], b[6] = {0};
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> m;
	sort(a, a + n, tmp);
	for (int i = 0; i < m; i++) {
		sum += a[i];
	}
	double x = (double)sum / (double)m;
	cout.setf(ios::fixed);
	cout << setprecision(2) << x;
	
}

