/*************************************************************************
    > File Name: 218.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月28日 星期六 20时32分36秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define max 100000

struct st {
	int hei;
	int xu;
}stu[max];

bool cmp (st x, st y) {
	if (x.hei == y.hei) return x.xu < y.xu;
	return x.hei < y.hei;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> stu[i].hei;
		stu[i].xu = i + 1;
	}
	sort(stu, stu + n, cmp);
	
	for (int i = 0; i < n; i++) {
		if (i) cout << " ";
		cout << stu[i].xu;
	}
}

