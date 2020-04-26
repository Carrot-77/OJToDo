/*************************************************************************
    > File Name: 464.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年02月06日 星期四 21时22分05秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	int ans = 0;
	for (int i = x; i <= y; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
