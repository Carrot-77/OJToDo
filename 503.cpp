/*************************************************************************
    > File Name: 503.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月15日 星期三 15时57分48秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define maxn 30000

bool cmp (int x, int y) {
	return x > y;
}

int main() {
	int w, n, a[maxn + 5];
	cin >> w >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n, cmp);
	int i = 0, j = n - 1;
	int weit = 0, ans = 0;
	while (i <= j) {
		weit = a[i];
		while (weit + a[j] <= w) {
			j--;
			weit += a[j];
			//cout << i << " " << j << endl;
		}
		ans++;
		i++;
	}
	cout << ans;
}

