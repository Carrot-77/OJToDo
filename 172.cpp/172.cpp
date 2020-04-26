/*************************************************************************
    > File Name: 172.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月10日 星期二 11时44分46秒
 ************************************************************************/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string name[10];
	for (int i = 0; i < 10; i++)
		cin >> name[i];
	sort(name,name + 10);
	for (int i = 0; i < 10; i++) {
		cout << name[i];
		if (i != 9) cout << endl;
	}
}
