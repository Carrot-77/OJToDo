/*************************************************************************
    > File Name: 181.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月10日 星期二 20时27分19秒
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin >> str;
	int len = str.length();
	for (int i = 0; i < len; i++) {
		if (str[i] < 91) str[i] += 32;
		else str[i] -= 32;
	}
	cout << str;
}
