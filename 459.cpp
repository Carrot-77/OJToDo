/*************************************************************************
    > File Name: 459.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月02日 星期四 20时53分23秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
	string name, sex;
	int year;
	double weight;
	cin >> name >> sex >> year >> weight;
	cout.setf(ios::fixed);
	cout << name <<  " " << sex <<  " " << year << " ";
	cout << setprecision(1) << weight << endl;
}
