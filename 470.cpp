/*************************************************************************
    > File Name: 470.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月10日 星期五 18时40分52秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define maxn 500000
int main() {
	string str;
	int s[maxn + 5] = {0};
	int j = 0, num;
	while(cin >> str) {
		int sum = 0;
		num = 1;
		for (int i = 4; i >= 0; i--) {
			if (str[i] <= '9') {
				sum += (str[i] - '0') * num;
				num *= 36;
			} else {
				sum += (str[i] - 'A' + 10) * num;
				num *= 36;
			}
		}
		s[j] = sum;
		j++;
	}
	sort (s, s + j);
	int min = s[1] - s[0];
	for (int i = 2; i < j; i++) {
		if (s[i] - s[i - 1] < min) min = s[i] - s[i - 1];
	}
	cout << min;

}
