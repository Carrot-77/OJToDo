/*************************************************************************
    > File Name: 504.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月15日 星期三 16时45分48秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 240

int n, len;
string s;

void print() {
	int flag = 1;
	for (int i = 0; i < len - n; i++) {
		if (s[i] != '0') flag = 0;
		if (!flag) cout << s[i];
	}
	cout << endl;
}

int main() {
	cin >> s >> n;
	len = s.length();
	for (int i = 0; i < n; i++) {
		int x = len - 1;
		for (int j = 0; i < n; j++) {
			if (s[j] > s[j + 1]) {
				x = j;
				break;
			}
		}
		s.replace(x, 1, "");
	}
	print();
}
