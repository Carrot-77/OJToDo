/*************************************************************************
    > File Name: 219.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月29日 星期日 17时47分37秒
 ************************************************************************/
#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define N 100000

bool tmp (int x, int y) {
	return x > y;
}
int main() {
	int n, l1, r1, l2, r2;
	cin >> n >> l1 >> r1 >> l2 >> r2;
	int a[N];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a + l1 - 1, a + r1);
	sort(a + l2 - 1, a + r2, tmp);
	for (int i = 0; i < n; i++) {
		if (i) cout << " ";
		cout << a[i];
	}
	
}
