/*************************************************************************
    > File Name: 182.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月10日 星期二 20时36分04秒
 ************************************************************************/
#include<iostream>
using namespace std;
int main() {
	int n;
	int a[100001];
	cin >> n;
	int max = 0;
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		if (a[i] > max) max = a[i];
	}
	cout << max;
}
