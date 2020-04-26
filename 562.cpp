/*************************************************************************
    > File Name: 562.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月10日 星期五 19时49分46秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 5000000

int main() {
	int n, k, a[maxn + 5] = {0};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		a[k] += 1;
	}
	for (int i = 1; i < n; i++) {
		if (a[i] & 1) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}
