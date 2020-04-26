/*************************************************************************
    > File Name: 177.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月10日 星期二 15时08分21秒
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin >> str;
	cout << str << endl;
	int len = str.length();
	string str1;
	for (int i = 0; i < len - 1; i++) {
		str1 = str.substr((len - 2), 2);
		str.erase(len - 2, 2);
		str.insert(0,str1);
		cout << str << endl;
	}
}
