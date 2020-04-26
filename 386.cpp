/*************************************************************************
    > File Name: 386.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月08日 星期三 19时41分15秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int m, n;

struct node {
	int val;
	int num;
};
struct node sum[100005];

bool cmp (node a, node b) {
	return a.val < b.val;
}


int main() {
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		cin >> sum[i].val;
		sum[i].num = i + 1;
	}
	sort(sum, sum + m, cmp);
	for (int j = 0; j < n; j++) {
		int t;
		cin >> t;
		int left = 0, right = m - 1;
		int mid;
		int f = 0;
		while (left <= right) {
			mid = (left + right) / 2;
			if (sum[mid].val == t) {
				cout << sum[mid].num << endl;
				f = 1;
				break;
			} else if (sum[mid].val < t) left = mid + 1;
			else right = mid - 1;
		}
		if (f == 0) 
			cout << "0" << endl;


	}
	return 0;
}
