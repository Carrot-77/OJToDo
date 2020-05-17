/*************************************************************************
    > File Name: 250.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年05月17日 星期日 20时11分07秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
#define maxn 1000000
long long a[maxn + 5];
long long s[maxn + 5];
long long g[maxn + 5];
long long n, sum, c, ans;

int main() {
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
		sum += a[i];
	}
	c = sum / n;
	for (long long i = 1; i <= n; i++) {
		g[i] = s[i] - i * c;
	}
	sort(g + 1, g + n + 1);
	c = g[n / 2];
	for (long long i = 1; i <= n; i++) {
		ans += abs(g[i] - c);
	}
	cout << ans << endl;
	return 0;
}
