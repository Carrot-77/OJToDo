/*************************************************************************
    > File Name: 311.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月15日 星期三 17时52分21秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 10000000
int prime[maxn + 5] = {0};
int is_prime[maxn + 5] = {0};

int gcd(int a, int b) {
	return (b ? gcd(b, a % b) : a);
}

void init(int n) {
	for (int i = 2; i <= n; i++) {
		if (!is_prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0] && i * prime[j] <= n; j++) {
			is_prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) break;
		}
	}
	return ;
}
int main() {
	int n, ans = 0; 
	cin >> n;
	init (n);
	is_prime[1] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 2; j <= n; j++) {
			if (!is_prime[gcd(i, j)]) ans++;
		}
	}
	cout << ans;
}
