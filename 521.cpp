/*************************************************************************
    > File Name: 521.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年05月20日 星期三 18时34分56秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int prime[3000005] = {1, 1};
int n, r, x[35], ans;

void is_prime() {
	for (int i = 2; i * i <= 3000000; i++) {
		if (!prime[i]) {
			for (int j = 2; i * j <= 3000000; j++)
				prime[i * j] = 1;
		}
	}
	return;
}

void func(int a, int sum, int ind) {
	if (ind == 0) {
		if (prime[sum] == 0) ans++;
		return;
	}
	for (int i = a; i < n - ind + 1; i++) {
		sum += x[i];
		func(i + 1, sum, ind - 1);
		sum -= x[i];
		//ind += 1;
	}
	return;
}

int main() {
	cin >> n >> r;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	is_prime();
	func(0, 0, r);
	cout << ans << endl;
	return 0;
}
