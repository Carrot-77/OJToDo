/*************************************************************************
    > File Name: 207.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月26日 星期四 18时21分58秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define N 30

struct stu {
	string name;
	int score[4];
}stus[N];

int main() {
	int n, k = 0, re[N * 4], sum[N];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> stus[i].name;
		sum[i] = 0;
		for (int j = 0; j < 4; j++) {
			cin >> stus[i].score[j];
			sum[i] += stus[i].score[j];
			re[k] = stus[i].score[j];
			k++;
		}
	}
	for (int i = 0; i < n; i++)
		cout << sum[i] << endl;
	int maxn = 0; 
	int max = sum[0];
	for (int i = 1; i < n; i++) {
		if (sum[i] > max) {
			maxn = i;
			max = sum[i];
		}
	}
	cout << stus[maxn].name << endl;
	sort(re, re + n * 4);
	cout << re[n * 4 - 1] << " " << re[0];

}
