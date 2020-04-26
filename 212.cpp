/*************************************************************************
    > File Name: 212.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月24日 星期二 20时39分30秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main () {
	string a[10];
	for (int i = 0; i < 10; i++) 
		cin >> a[i];
	sort(a, a + 10);
	for (int i = 0; i < 10; i++){
		cout << a[i];
		if (i != 9) cout << endl;
	}
}
