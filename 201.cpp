/*************************************************************************
    > File Name: 201.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月26日 星期四 15时38分51秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define max 100

int main() {
	int n;
	cin >> n;
	int a[max + 5], b[max + 5];
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	sort(a, a + n);
	b[0] = a[0];
	int x = a[0], y = a[1];
	int num = n, k = 0;
	for (int i = 1; i < n; i++) {
		if (x == y) {
			num--;
		}
		else {
			k++;
			b[k] = y;
		}
		x = a[i]; y = a[i + 1];
	}
	cout << num << endl;
	for (int i = 0; i < num; i++) {
		if (i) cout << " ";
		cout << b[i];
	}
}
