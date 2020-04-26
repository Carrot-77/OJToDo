/*************************************************************************
    > File Name: 47.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年02月06日 星期四 21时50分31秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
int v[105], w[105], f[10005] = {0};
int val, n;
void fl () {
	for (int i = 0; i < n; i++) {
		for (int j = val; j >= w[i]; j--) {
			f[j] = max(f[j], f[j - w[i]] + v[i]);
		}
	}
	return ;
}
int main() {
	cin >> val >> n;
	for (int i = 1; i <= n; i++)
		cin >> w[i] >> v[i];
	fl();
	cout << f[val] << endl;
	return 0;
}
