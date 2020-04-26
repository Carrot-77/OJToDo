/*************************************************************************
    > File Name: 215.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月28日 星期六 19时04分31秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define N 40

struct stu {
	string name;
	int score[4];
	int sum;
}stus[N];

bool cmp(stu a, stu b) {
	if (a.sum >= b.sum) return true;
	else return false;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> stus[i].name;
		stus[i].sum = 0;
		for (int j = 0; j < 4; j++) {
			cin >> stus[i].score[j];
			stus[i].sum += stus[i].score[j];
		}
	} 
	sort(stus, stus + n, cmp);
	for (int i = 0; i < 3; i++)
		cout << stus[i].name << endl;
}
