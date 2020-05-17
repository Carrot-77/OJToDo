/*************************************************************************
    > File Name: 245a.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年05月17日 星期日 19时26分27秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
#include <vector>
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int pos = a[n / 2];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += abs(a[i] - pos);
	}
	cout << sum << endl;
	return 0;
}
