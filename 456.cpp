/*************************************************************************
    > File Name: 456.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月02日 星期四 20时12分26秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 100000

int main() {
	int n, a[maxn] = {0}; 
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a[x] += 1;
	}
	for (int i = 1; i < 100; i++) {
		if (a[i] % 2 != 0) {
			cout << i;
			return 0;
		}
	}
}
