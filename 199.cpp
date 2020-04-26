/*************************************************************************
    > File Name: 199.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月26日 星期四 14时46分35秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define max 100005
long long int keep[max] = {0};
long long int f(int *a, int k, int m) {
	if (k < 10) return k;
	if (k < max && keep[k]) return keep[k];

	long long int ans = 0;
	for (int i = 1; i <= 10; i++){
		ans += (long long int)a[i] * f(a, k - i, m);
		ans %= m;
	}

	if (k < max) keep[k] = ans;
	return ans;

}
int main() {
	int k, m;
	int a[10];
	cin >> k >> m;
	for (int i = 1; i <= 10; i++)
		cin >> a[i];
	cout << f(a, k, m);
}
