/*************************************************************************
    > File Name: 468.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年02月06日 星期四 21时40分22秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int gcd(int m, int n) {
	return (n ? gcd (n, m % n) : m);
}

int main() {
	int m, n;
	cin >> m >> n;
	cout << gcd(m, n) << endl;
	return 0;
}
