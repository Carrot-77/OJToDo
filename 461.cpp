/*************************************************************************
    > File Name: 461.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月22日 星期三 15时22分31秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 1000

int main() {
	int n, c, ans = 0, sum = 0, ans1 = 0;
	char a;
	string b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == 'C') {
			cin >> b;
			ans++;
		} else {
			cin >> c;
			ans1++;
			sum += c;
		}
	}
	cout << ans << " " << sum / ans1 << endl; 
}
