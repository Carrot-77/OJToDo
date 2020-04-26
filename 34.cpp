/*************************************************************************
    > File Name: 34.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月22日 星期三 14时17分27秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
	int year;
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		cout << "L" << endl;
	else cout << "N" << endl;
}
