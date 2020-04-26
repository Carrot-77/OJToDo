/*************************************************************************
    > File Name: 37.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月22日 星期三 14时09分25秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
	int m, n, num = 0;
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		if (i % 10 != 0) num++;
	}
	cout << num << endl;
}
