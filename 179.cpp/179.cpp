/*************************************************************************
    > File Name: 179.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月10日 星期二 19时04分51秒
 ************************************************************************/
#include<iostream>

using namespace std;

long long int pow(int n) {
	long long int ans = 1;
	for (int i = 0; i < n; i++) 
		ans *= 2;
	return ans;
}

int main() {
	int n;
	cin >> n;
	cout << pow(n);
}
