/*************************************************************************
    > File Name: 35.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月22日 星期三 14时04分21秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a > b) cout << "ERROR" << endl;
	else if (b < 0) cout << "ERROR" << endl;
	else {
		if (a < 0) a = 0;
		for (int i = a; i <= b; i++) 
			cout << i << endl;
	}
	return 0;
}
