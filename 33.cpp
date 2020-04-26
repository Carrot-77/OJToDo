/*************************************************************************
    > File Name: 33.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月22日 星期三 14时12分41秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
int main() {
	double m, n;
	int p;
	cin >> m >> n >> p;
	cout.setf(ios::fixed);
	if (p == 1) cout << setprecision(2) << (m + n) * 1.087 / 2 << endl;
	else cout << setprecision(2) << (m * 0.973 + n) / 2 << endl;
}
