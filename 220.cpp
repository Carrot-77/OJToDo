/*************************************************************************
    > File Name: 220.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月29日 星期日 17时59分58秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define N 105

struct stu {
	string name;
	int score[4];
	int sum;
}stus[N];

bool cmp0(stu a, stu b) {
	if (a.score[0] == b.score[0]) return a.name < b.name;
	else return a.score[0] > b.score[0];
}
bool cmp1(stu a, stu b) {
	if (a.score[1] == b.score[1]) return a.name < b.name;
	else return a.score[1] > b.score[1];
}
bool cmp2(stu a, stu b) {
	if (a.score[2] == b.score[2]) return a.name < b.name;
	else return a.score[2] > b.score[2];
}
bool cmp3(stu a, stu b) {
	if (a.score[3] == b.score[3]) return a.name < b.name;
	else return a.score[3] > b.score[3];
}

bool cmp(stu a, stu b) {
	if (a.sum == b.sum) return a.name < b.name;
	else return a.sum > b.sum;
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
	sort(stus, stus + n, cmp0);
	for (int i = 0; i < 4; i++) {
		if (i) cout << " ";
		cout << stus[i].name;
	}
	cout << endl;

	sort(stus, stus + n, cmp1);
	for (int i = 0; i < 4; i++) {
		if (i) cout << " ";
		cout << stus[i].name;
	}
	cout << endl;

	sort(stus, stus + n, cmp2);
	for (int i = 0; i < 4; i++) {
		if (i) cout << " ";
		cout << stus[i].name;
	}
	cout << endl;

	sort(stus, stus + n, cmp3);
	for (int i = 0; i < 4; i++) {
		if (i) cout << " ";
		cout << stus[i].name;
	}
	cout << endl;

	sort(stus, stus + n, cmp);
	for (int i = 0; i < 4; i++) {
		if (i) cout << " ";
		cout << stus[i].name;
	}
}
