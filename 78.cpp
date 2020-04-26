/*************************************************************************
    > File Name: 78.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月11日 星期六 19时56分34秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 300

int main() {
	string a, b;
	int c[maxn] = {0}, an[maxn], bn[maxn];
	cin >> a >> b;
	int alen = a.length(), blen = b.length();
	for (int i = 0; i < alen; i++) {
		an[i] = a[alen - i - 1] - '0';
	}
	for (int i = 0; i < blen; i++) {
		bn[i] = b[blen - i - 1] - '0';
	}
	int k = max(alen, blen);
	for (int i = 0; i < k; i++) {
		if (i >= alen) an[i] = 0;
		if (i >= blen) bn[i] = 0;
		c[i] = an[i] + bn[i];
	}
	for (int i = 0; i < k; i++) {
		if (c[i] < 10) continue;
		c[i + 1] += c[i] / 10;
		c[i] %= 10;
		k += (i == k - 1);
	}
	for (int i = k - 1; i >= 0; i--)
		cout << c[i];
	return 0;

}
