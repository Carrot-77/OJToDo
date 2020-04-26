/*************************************************************************
    > File Name: 466.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年02月06日 星期四 21时28分56秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int f(int k) {
	int x = k, tmp = 0;
	while (x) {
		tmp = tmp * 10 + x % 10;
		x /= 10;
	}
	return tmp == k;
}

int main() {
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (f(i)) ans++;
	}
	cout << ans << endl;
	return 0;
}
