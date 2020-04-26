/*************************************************************************
    > File Name: 213.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月28日 星期六 18时39分57秒
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
	int n;
	cin >> n;
	int a[N], b[6] = {0};
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n, tmp);
	int x = 0;
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
		if (a[i] == 100) b[0] += 1;
		else if (a[i] >= 90) b[1] += 1;
		else if (a[i] >= 80) b[2] += 1;
		else if (a[i] >= 70) b[3] += 1;
		else if (a[i] >= 60) b[4] += 1;
		else b[5] += 1;
	}
	for (int i = 0; i < 6; i++) {
		if (i) cout << " ";
		cout << b[i];
	}

}
