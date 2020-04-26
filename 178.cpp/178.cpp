/*************************************************************************
    > File Name: 178.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月10日 星期二 15时42分20秒
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	string str;
	string st;
	string alph[20] = {"B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U"};
	str = "A";
	int i = 1;
	while(i < n){
		st = str.substr(0);
		str = str + alph[i - 1];
		str = str + st;
		i++;
	}
	cout << str;
}
