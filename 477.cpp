/*************************************************************************
    > File Name: 477.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月11日 星期六 14时53分17秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
	string str;
	cin >> str;
	int len = 0, a = 0, max = 0, b = 0, x = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
			b = i - a;
			a = i;
			x++;
			if (max < b && x != 0) max = b;
		}
	}
	cout << max << endl;
}
