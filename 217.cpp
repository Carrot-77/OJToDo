/*************************************************************************
    > File Name: 217.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月28日 星期六 20时03分16秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define N 100000

bool tmp (int x, int y) {
	return x > y;
}
int main() {
	int n;
	cin >> n;
	int a[N];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n, tmp);
	int x = n / 2;
	while(a[x + 1] == a[x]) {
		x++;
	}
	cout << a[x] << " " << x + 1;
	
}

