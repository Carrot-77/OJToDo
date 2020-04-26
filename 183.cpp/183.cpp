/*************************************************************************
    > File Name: 183.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月10日 星期二 20时44分53秒
 ************************************************************************/
#include<iostream>
using namespace std;
int f(int x) {
	if (x <= 0) return 0;
	else if (x == 1) return 1;
	else if (x % 2 == 0) return (3* f(x / 2) - 1);
	else return (3 * f((x + 1) / 2) - 1);
}
int main() {
	int n;
	cin >> n;
	cout << f(n);
}
