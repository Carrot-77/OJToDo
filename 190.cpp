/*************************************************************************
    > File Name: 190.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月17日 星期二 18时14分26秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define max 80000000
int prime[max + 5] = {0};
void f1() {
	for (int i = 2; i * i <= max; i++) {
		if (!prime[i]) {
			for (int j = 2; i * j <= max; j++) {
				prime[i * j] = 1;
			}
		}
	}
}

int f2(int n) {
	int sum = 0;
	for (int i = 2; i * 2 <= n; i++) {
			if (!prime[i] && !prime[n - i]) {
				sum++;
				cout << prime[i] << endl;
			}
	}
	return sum;
}

int main() {
	void f1();
	int n;
	cin >> n;
	cout << f2(n);
}
