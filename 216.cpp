/*************************************************************************
    > File Name: 216.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月28日 星期六 19时49分40秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define N 100


int main() {
	int n;
	cin >> n;
	string a[N], b[N];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i].substr(3);
	}
	sort(b, b + n);
	for (int i = 0; i < n; i++) {
		cout << b[i] << endl;
	}
	
}

