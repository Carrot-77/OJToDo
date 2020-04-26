/*************************************************************************
    > File Name: 484.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月11日 星期六 15时23分48秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
	int re[26] = {0};
	string str;
	while(cin >> str) {
		for (int i = 0; i < str.length(); i++) {
			if (str[i] > 64 && str[i] < 123) {
				re[str[i] - 'A'] += 1;
			}
		}

	}
	int max = 0;
	for (int i = 0; i < 26; i++) {
		if (max < re[i]) max = re[i];
	}
	int k = max, y = max;
	int rem[1005] = {0};
	for (int i = 1; i <= max; i++) {
		for (int j = 0; j < 26; j++) {
			if (re[j] >= y) rem[i] = j;
		}
		y--;
	}
	for (int i = 1; i <= max; i++) {
		for (int j = 0; j < 26 && rem[i] >= j; j++) {
			if (j) cout << " ";
			if (re[j] >= k) {	
				cout << "*";
			}else {
				cout << " ";
			}
		}
		k--;
		cout << endl;
	}
	char out = 'A';
	for (int i = 0; i < 26; i++) {
		if (i) cout << " ";
		cout << out;
		out++;
	}

}
