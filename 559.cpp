/*************************************************************************
    > File Name: 559.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月26日 星期日 15时08分27秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

struct mes {
	int s;
	int f;
	double val;
};

struct mes mess[1005];
int m, n;
double ans;

bool temp(struct mes a, struct mes b) {
	return a.val > b.val;
}

void f1() {
	int re = m, i = 0;
	while (re > 0) {
		if (mess[i].f >= re) {
			ans += mess[i].val * (double)re;
			break;
		} else {
			ans += mess[i].s;
			re -= mess[i].f;
			i++;
		}
	}
	return ;
}

int main() {
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		cin >> mess[i].s >> mess[i].f;
		mess[i].val = (double)mess[i].s / (double)mess[i].f;
	}
	sort(mess, mess + n, temp);
	f1();
	cout.setf(ios::fixed);
	cout << setprecision(3) << ans << endl;
	return 0;
}
