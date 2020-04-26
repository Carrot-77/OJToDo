/*************************************************************************
    > File Name: 197.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月26日 星期四 11时00分12秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
bool cmp (int x, int y) {
	return x > y;
}

int main () {
	int a[10];
	for (int i = 0; i < 10; i++) 
		cin >> a[i];
	sort(a, a + 10, cmp);
	for (int i = 0; i < 10; i++) {
		if (i) cout << " ";
		cout << a[i];
	}
}
