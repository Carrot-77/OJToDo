/*************************************************************************
    > File Name: 39.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月03日 星期五 12时32分58秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
	int begin, n;
	cin >> begin >> n;
	if (begin <= 0) {
		int k = 0;
		while (n) {
			cout << k << endl;
			k += 2;
			n--;
		}
	} else {
		int k;
		if (begin % 2 == 0) k = 0;
		else k = 1;
		while (n) {
			cout << begin + k << endl;
			k += 2;
			n--;
		}
	}
}
