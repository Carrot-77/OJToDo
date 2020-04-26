/*************************************************************************
    > File Name: 174.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月10日 星期二 13时39分03秒
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	getline(cin, str);
	int x = str.find(" ");
	while (x != -1) {
		str = str.replace(x, 1, "%20");
		x = str.find(" ", x + 1);
	}
	cout << str;
}
