/*************************************************************************
    > File Name: 190a.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月19日 星期四 16时24分32秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int prime[8000005] = {1, 1};
int main() {
	int n;
	cin >> n;
	for (int i = 2; i * i <= n; i++) {
		if (!prime[i]) {
			for (int j = 2; i * j <= n; j++)
				prime[i * j] = 1;
		}
	}
	int sum = 0;
	for (int i = 2; i * 2 <= n; i++) {
		if (!prime[i] && !prime[n - i]) sum++;
	}
	cout << sum;
}
