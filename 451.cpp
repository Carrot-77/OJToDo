/*************************************************************************
    > File Name: 451.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月02日 星期四 18时26分14秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define N 100000

int main() {
	int n, a[N];
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		if (i) cout << endl;
		cout << a[i];
	}
}
