/*************************************************************************
    > File Name: 452.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月02日 星期四 18时29分59秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define N 10000

int main() {
	int n, a[N + 5], sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j + 1] < a[j]) {
				swap(a[j], a[j + 1]);
				sum += 1;
			}
		}
	}
	cout << sum << endl;
}
