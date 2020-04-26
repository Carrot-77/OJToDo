/*************************************************************************
    > File Name: 457.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月02日 星期四 20时16分59秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 1000

int main() {
	int n, a[maxn + 5], b[maxn + 5] = {0};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		int k = n;
		if (i) {
			k = abs(a[i] - a[i - 1]);
			if (k < n && k > 0) {
				if (b[k] == 1) {
					cout << "Not jolly" << endl;
					return 0;
				}else {
					b[k] = 1;
				}
			}
			else {
				cout << "Not jolly" << endl;
				return 0;
			}
		}
	}
	cout << "Jolly" << endl;
	return 0;
}
