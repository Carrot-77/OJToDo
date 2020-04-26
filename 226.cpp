/*************************************************************************
    > File Name: 226.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月31日 星期二 10时29分18秒
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
	long long tmp = a, ans = 1;
	while (b) {
		if (b & 1) ans = ans * tmp % c;
		tmp = tmp * tmp % c;
		b >>= 1;
	}
	cout << ans % c;
}
