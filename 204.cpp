/*************************************************************************
    > File Name: 204.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月26日 星期四 16时57分44秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
	int n, a[30][30];
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		if (i) cout << endl;
		cout << a[i][i];
	}
}
