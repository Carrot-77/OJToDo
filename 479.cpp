/*************************************************************************
    > File Name: 479.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月11日 星期六 17时03分37秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
	string str = "e", s;
	int n = 1;
	while (cin >> s) {
		str.append(s);
		//str.insert(str.end(), s.begin(), s.end());
	}
	int i = 1, a = 0, b = 0;
	while (i < str.length()) {
		if (abs(a - b) >= 2 && max(a, b) >= 11) {
			cout << a << ":" << b << endl;
			a = 0, b = 0;
		}
		if (str[i] == 'E') {
			cout << a << ":" << b << endl;
			break;
		}
		if (str[i] == 'W' || str[i] == 'w') {
			a++;
			i++;
		} else if (str[i] == 'L' || str[i] == 'l') {
			b++;
			i++;
		}
	}
	cout << endl;
	i = 1, a = 0, b = 0;
	while (i < str.length()) {
		if (abs(a - b) >= 2 && max(a, b) >= 21) {
			cout << a << ":" << b << endl;
			a = 0, b = 0;
		}
		if (str[i] == 'E') {
			cout << a << ":" << b << endl;
			break;
		}
		if (str[i] == 'W' || str[i] == 'w') {
			a++;
			i++;
		} else if (str[i] == 'L' || str[i] == 'l') {
			b++;
			i++;
		}
	}
	return 0;
}
