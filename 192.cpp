/*************************************************************************
    > File Name: 192.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月21日 星期六 20时54分22秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
double fx(double x) {
	return exp(x) * x;
}
double f(double a, double b, double ep, double ans) {
	//int k = 0;
	double x0;
	while (abs(a - b) > 2 * ep) {
		x0 = (a + b) / 2;
		double fx0 = fx(x0);
		//double fa = fx(a);
		//double fb = fx(b);
		if (ans - fx0 < 0) b = x0;
		else if (ans - fx0 > 0) a = x0;
		else break;
	}
	//k++;
	return x0;
}

int main() {
	int a;
	cin >> a;
	cout.setf(ios::fixed);
	cout << setprecision(4) << f(0, 100, 0.00001, (double)a);
}

