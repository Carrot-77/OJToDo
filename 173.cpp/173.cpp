/*************************************************************************
    > File Name: 173.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月10日 星期二 11时54分55秒
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	getline(cin, str);
	int alph = 0, num = 0, space = 0, oths = 0;
	for (int i = 0; i < str.length(); i++) {
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123 ))
			alph++;
		else if (str[i] > 47 && str[i] < 58)
			num++;
		else if (str[i] == ' ') 
			space++;
		else oths++;
	}
	cout << alph << " " << num << " " << space << " " << oths;
}
