/*************************************************************************
    > File Name: 380.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月09日 星期四 19时32分33秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define maxn 100

struct num {
	int b;
	int nu;
	string a;
}nums[maxn + 5];

bool cmp (num x, num y) {
	return x.b > y.b;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> nums[i].a;
		nums[i].nu = i + 1;
		nums[i].b = nums[i].a.length();
	}
	sort(nums, nums + n, cmp);
	int max = nums[0].b, ans = nums[0].nu;
	string x = nums[0].a;
	for (int i = 1; i < n && nums[i].b == max; i++) {
		for (int j = 0; j < max; j++) {
			if(x[j] - '0' < nums[i].a[j] - '0') {
				x = nums[i].a;
				ans = nums[i].nu;
				break;
			} else if (x[j] - '0' == nums[i].a[j] - '0') {
				continue;
			} else break;
		}
	}
	cout << ans << endl;
	cout << x;
}
