/*************************************************************************
    > File Name: 515.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年05月20日 星期三 19时29分29秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int a, b, l;
int aa, bb;
double raw, now = 9999999;

int gcd(int a, int b) {
	return (b ? gcd(b, a % b) : a);
}

int main() {
	cin >> a >> b >> l;
	raw = (double)a / (double) b;
	for (int i = 1; i <= l; i++) {
		for (int j = 1; j <= l; j++) {
			double t = (double)i / (double)j;
			if (t >= raw && t - raw < now - raw && gcd(i, j) == 1) {
				now = t;
				aa = i;
				bb = j;
			}
		}
	}
	cout << aa << " " << bb << endl;
	return 0;
}
