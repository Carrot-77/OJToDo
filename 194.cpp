/*************************************************************************
    > File Name: 194.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月24日 星期二 15时39分47秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
#define max 100005
using namespace std;

int find(int *a, int n, int s) {
	int left, right = n - 1;
	int mid;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] >= s) return 0;
		left = i + 1;
		while (left <= right) {
			mid = (left + right) / 2;
			if (a[mid] > s - a[i]) right = mid - 1;
			else if (a[mid] < s - a[i]) left = mid + 1;
			else return 1;
		}
	}
	return 0;
}
int main() {
	int n, s;
	int a[max];
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	cin >> s;
	if (find(a, n, s) == 1) cout << "Yes" << endl;
	else cout << "No" << endl;
}
