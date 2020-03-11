/*************************************************************************
    > File Name: 171a.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月20日 星期一 00时37分26秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define maxn 1000
int main() {
	string a;
	cin >> a;
	int len = a.length();
	if (a[0] == '1') {
		for (int i = 1; i < len; i++) {
			if (a[i] != '0') break;
			else if (i == len - 1) {
				for (int j = 0; j < len - 1; j++)
					cout << "9";
				return 0;
			}
		}
	}
	int num1[maxn + 5], num2[maxn + 5], num[maxn + 5];
	num[0] = len;
	for (int i = 1; i <= len; i++) {
		num1[i] = a[len - i] - '0';
		num2[i] = a[len - i] - '0';
		num[i] = a[len - i] - '0';
	}		
	int k = 0;
	for (int i = 1; i <= len / 2; i++) {
		num1[i] = num1[len - i + 1];
		num2[i] = num2[len - i + 1];
	}
	for (int i = 1; i <= len; i++)
		cout << num1[i];
}
