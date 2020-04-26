/*************************************************************************
    > File Name: 447.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月03日 星期五 12时25分19秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define maxn 1000
int a[] = {
	4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777
};
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < 14; i++) {
		if (n % a[i] == 0) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
