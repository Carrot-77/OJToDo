/*************************************************************************
    > File Name: 467.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年02月06日 星期四 21时37分18秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

long long int f(int n) {
	if (n == 1) return 1;
	else return n * f(n - 1);
}

int main() {
	int n;
	cin >> n;
	cout << f(n) << endl;
	return 0;
}
