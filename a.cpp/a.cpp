/*************************************************************************
    > File Name: a.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月10日 星期二 18时18分26秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
int binary_search(int *arr, int x, int n) {
	int left = 0, right = n - 1;
	int mid = (left + right) / 2;
	while (left <= right) {
	    if (x == arr[mid]) return 1;
	    else if (x > arr[mid]) left = mid + 1;
		else right = mid - 1;
	}
	return -1;
}

int main() {
	int *arr, x, n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr);
	if (binary_search(*arr, x, n) != -1) cout << "YES";
	else cout << "NO";
}
