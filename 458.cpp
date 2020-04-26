/*************************************************************************
    > File Name: 458.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月02日 星期四 20时41分06秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 100

struct st {
	string name;
	string sex;
	int year;
	int mon;
	int old;
} stus[maxn + 5];

bool cmp (st a, st b) {
	return a.old < b.old;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> stus[i].name >> stus[i].sex >> stus[i].year >> stus[i].mon;
		stus[i].old = (2020 - stus[i].year) * 12 + (12 - stus[i].mon);
	}
	sort(stus, stus + n, cmp);
	for (int i = 0; i < n; i++) {
		if (i) cout << endl;
		cout << stus[i].name << " " << stus[i].sex << " ";
		cout << stus[i].year << " " << stus[i].mon; 
	}
	return 0;
}
