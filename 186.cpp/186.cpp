/*************************************************************************
    > File Name: 186.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月11日 星期三 20时21分17秒
 ************************************************************************/
#include<iostream>
using namespace std;
int main() {
	int n, sum, a[100001];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	sum = 1; 
	int x = a[0];
	while (x < n) {
		x = x + a[x];
		sum++;
	}
	cout << sum;
}
