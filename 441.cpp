/*************************************************************************
    > File Name: 441.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月03日 星期五 11时37分20秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
	int x, n, sum = 0;
	cin >> x >> n;
	for (int i = x; i < n + x; i++) {
		if (i % 7 == 0 || i % 6 == 0) continue;
		sum++;
	}
	cout << sum * 2;
}
