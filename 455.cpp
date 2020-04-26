/*************************************************************************
    > File Name: 455.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月02日 星期四 20时00分20秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int gcd(int a, int b) {
	return (b == 0 ? a : gcd(b, a % b));
}
int main() {
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	int x = gcd(a[0], a[2]);
	cout << a[0] / x << "/" << a[2] / x;
}
