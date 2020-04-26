/*************************************************************************
    > File Name: 448.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月02日 星期四 20时57分55秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define maxn 100

int main() {
	int n, a[maxn + 5], num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> num;
	for (int i = 0; i < n; i++) {
		if (a[i] == num) {
			cout << i + 1 << endl;
			return 0; 
		}
	}
	cout << "0" << endl;
	return 0;
}
