/*************************************************************************
    > File Name: 442.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月03日 星期五 11时49分14秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 30
int a[maxn + 5] = {0};

int step (int i) {
	if (i == 1) a[i] = 1;
	else if (i == 2) a[i] = 2;
	else a[i] = step(i - 1) + step(i - 2);
	return a[i];
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i != 1) cout << " ";
		cout << step(i);
	}
}
