/*************************************************************************
    > File Name: 469.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月10日 星期五 18时28分25秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
	int x;
	string str;
	cin >> x >> str;
	int ans = 0, len = str.length(), num = 1;
	for (int i = len - 1; i >= 0; i--) {
		ans += (str[i] - '0') * num;
		num *= x;
	}
	cout << ans << endl;
}
