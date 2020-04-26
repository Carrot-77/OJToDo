/*************************************************************************
    > File Name: 463.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月27日 星期一 19时31分05秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
	int a1, b1, c1, d1;
	int a2, b2, c2, d2;
	int s = 0;
	int n1, n2, n3, n4;
	cin >> a1 >> b1 >> c1 >> d1;
	cin >> a2 >> b2 >> c2 >> d2;
	if (b1 <= a2 || b2 <= a1 || c1 >= d2 || d1 <= c2) 
		cout << "0" << endl;
	else {
		if (a2 > a1) n1 = a2;
		else n1 = a1;
		if (b1 < b2) n2 = b1;
		else n2 = b2;
		if (c1 < c2) n3 = c2;
		else n3 = c1;
		if (d1 < d2) n4 = d1;
		else n4 = d2;
		cout << abs(n1 - n2) * abs(n3 - n4);
	}


}
