/*************************************************************************
    > File Name: 200.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月26日 星期四 15时06分42秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define max 30

int main() {
	int n;
	cin >> n;
	int num1[max], num2[max];
	num1[1] = 4;
	num2[1] = 7;
	double ans = (double)4 / (double)7;

	for (int i = 2; i <= n; i++) {
		num1[i] = num2[i - 1];
		num2[i] = num1[i - 1] + num2[i - 1]; 
		ans += (double)num1[i] / (double)num2[i];
	}
	cout << num1[n] << "/" << num2[n] << endl;
	cout.setf(ios::fixed);
	cout << setprecision(2) << ans;
}
