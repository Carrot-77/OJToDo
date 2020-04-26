/*************************************************************************
    > File Name: 227.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月02日 星期四 17时59分50秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
int main() {
	long long a, b, c;
	cin >> a >> b >> c;
	long long ans = 0;
	a %= c;
	b %= c;
	while (b) {
		if (b & 1) ans = (ans + a) % c;
		a = a * 2 % c;
		b >>= 1;
	}
	cout << ans;
}

