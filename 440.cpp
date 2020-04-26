/*************************************************************************
    > File Name: 440.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月03日 星期五 10时43分21秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define maxn 1000000

int main() {
	int n, x;
	cin >> n >> x;
	int sum;
	for (int i = 1; i <= n; i++) {
		int temp = i, temp2 = i;
		while (temp > 0) {
			temp %= 10;
			if (temp == x)
				sum++;
			temp2 /= 10;
			temp = temp2;
		}
	}
	cout << sum;
}
