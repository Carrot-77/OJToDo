/*************************************************************************
    > File Name: 506.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created ttime: 2020年05月13日 星期三 18时05分54秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int n;
struct ttime {
	int num;
	int wait;
};

struct ttime ttime[35];

bool temp(struct ttime a, struct ttime b) {
	if (a.wait == b.wait) return a.num < b.num;
	return a.wait <= b.wait;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ttime[i].wait;
		ttime[i].num = i + 1;
	}
	double sum = 0, now = 0;
	sort(ttime, ttime + n, temp);
	for (int i = 0; i < n; i++) {
		if (i) cout << " ";
		cout << ttime[i].num;
		sum += ttime[i].wait * (n - i - 1);
	}
	cout << endl;
	cout.setf(ios::fixed);
	cout << setprecision(2) << sum / (double)n;
	return 0;
}

