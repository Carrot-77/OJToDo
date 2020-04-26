/*************************************************************************
    > File Name: 193.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月22日 星期日 15时50分27秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define max 100001
int find(int *a, int n, int ans) {
	int left = 0, right = n - 1;
	int mid = (left + right) / 2;
	while (left <= right) {
		mid = (left + right) / 2;
		if (a[mid] > ans) right = mid - 1;
		else if (a[mid] < ans) left = mid + 1;
		else return 1;
	}
	return 0;
}
int main() {
	int a[max + 5];
	int n, k, s;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> k >> s;
	if (find(a, n, s - k) == 1) cout << "Yes";
	else cout << "No";
}
