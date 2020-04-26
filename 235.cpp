/*************************************************************************
    > File Name: 235.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年03月11日 星期三 18时57分51秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int num[11], cnt, n;

void p() {
	for (int i = 0; i < cnt; i++) {
		if (i) cout << " ";
		cout << num[i];
	}
	cout << endl;
}

void f(int s) {
	for (int i = s; i <= n; i++) {
		num[cnt++] = i;
		p();
		f(i + 1);
		cnt--;
	}
}

int main() {
	cin >> n;
	f(1);
	return 0;
}
