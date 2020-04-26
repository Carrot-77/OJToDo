/*************************************************************************
    > File Name: 198.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月26日 星期四 11时06分04秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define max 100005
long long int a[max];
long long int f(int n) {
	a[1] = 1;
	a[2] = 1;
	for (int i = 3; i <= n; i++){
		a[i] = a[i - 1] + a[i - 2];
		a[i] %= 1000000007;
	}
	return a[n];
}

int main(){
	int n;
	cin >> n;
	cout << f(n);
}
