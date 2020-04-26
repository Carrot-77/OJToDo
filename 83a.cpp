/*************************************************************************
    > File Name: 83a.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年03月11日 星期三 20时11分12秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
int num[10], cnt;

void p() {
	for (int i = 0; i < cnt; i++) {
		if (i) cout << "+";
		cout << num[i];
	}
	cout << endl;
}

int f(int s, int lnum, int lcnt) {
	int k;
	if (lcnt == 0) {
		if (lnum == 0) {
			p();
			return 1;
		}
		return 0;
	}
	int ans = 0;
	for (int i = s; i <= lnum; i++) {
		num[cnt] = i;
		cnt++;
		ans += f(i, lnum - i, lcnt - 1);
		cnt--;
	}
	return ans;
}

int main() {
	int n, m;
	cin >> n >> m;
	cout << f(1, n, m) << endl;
	return 0;
}
