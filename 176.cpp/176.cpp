/*************************************************************************
    > File Name: 176.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月10日 星期二 14时22分57秒
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;
int main() {
	string str1, str2;
	char c;
	while((c = cin.get()) != '\n')
		str1 = str1 + c;
	while ((c = cin.get()) != '\n')
		str2 = str2 + c;
	int sum = 0;
	int x = str1.find(str2);
	while (x != -1) {
		sum++;
		str1.find(str2, x + 2);
	}
	cout << sum;
}
