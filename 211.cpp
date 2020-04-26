/*************************************************************************
    > File Name: 211.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月28日 星期六 14时01分39秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<cstring>
#include<algorithm>
#include<iomanip>
using namespace std;
#define N 30

int main() {
	int n;
	cin >> n;
	string a[N];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		reverse(a[i].begin(), a[i].end());
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++){
		if (i) cout << endl;
		cout << a[i];
	}
}
