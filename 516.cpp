/*************************************************************************
    > File Name: 516.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年05月20日 星期三 20时35分38秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

string str;
long long n, ans, numc[100005], numw[100005], nc, nw;

int main() {
	cin >> n;
	cin >> str;
	for (int i = 0; i < n; i++) {
		if (str[i] == 'C') nc++;
		numc[i] = nc;
	}
	for (int i = n - 1; i >= 0; i--) {
		if (str[i] == 'W') nw++;
		numw[i] = nw;
	}
	for (int i = 0; i < n; i++) {
		if (str[i] == 'O') {
			ans += numc[i] * numw[i];
		}
	}
	cout << ans << endl;
	return 0;
}
