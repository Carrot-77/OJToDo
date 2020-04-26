/*************************************************************************
    > File Name: 70.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月20日 星期一 21时00分35秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define maxn 1000
int ispri[maxn + 5] = {0, 1};
int a[3] = {2, 3, 5};

void init(int n) {
	ispri[2] = 1;
	ispri[3] = 1;
	ispri[5] = 1;
	for (int i = 2; i <= n; i++) {
		if (!ispri[i]) continue;
		for (int j = 0; j < 3 && i * a[j] <= n; j++) {
			ispri[i * a[j]] = 1;
		}
	}
	return ;
}
int main() {
	int n;
	cin >> n;
	init(n);
	for (int i = 1; i <= n; i++) {
		if (ispri[i]) cout << i << endl;
	}
}
