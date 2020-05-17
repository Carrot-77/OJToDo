/*************************************************************************
    > File Name: 251.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年05月17日 星期日 20时51分42秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
#define maxn 10000
int x[maxn + 5];
int w[maxn + 5];
int y[maxn + 5];
int n;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
	sort(y, y + n);
	sort(x, x + n);
	for (int i = 0; i < n; i++) w[i] = x[i] - i;
	sort(w, w + n);
	int sum = 0, cy = y[n / 2], cw = w[n / 2];
	for (int i = 0; i < n; i++) {
		sum += abs(y[i] - cy);
		sum += abs(w[i] - cw);
	}
	cout << sum << endl;
	return 0;
}
