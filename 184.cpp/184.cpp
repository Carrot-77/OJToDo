/*************************************************************************
    > File Name: 184.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月10日 星期二 20时50分14秒
 ************************************************************************/
#include<iostream>
using namespace std;
int f(int n) {
	if (n == 1) return 1;
	else return (f(n - 1) + 1) * 2;
}
int main() {
	int n;
	cin >> n;
	cout << f(n);
}
