/*************************************************************************
    > File Name: 585.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月20日 星期一 12时19分14秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 200

struct stu {
	int score;
	int level;
};

bool cmp (stu a, stu b) {
	if (a.score == b.score) return a.level < b.level;
	else return a.score > b.score;
}

int main() {
	struct stu stus[maxn + 5];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> stus[i].score >> stus[i].level;
	}
	int ans;
	sort(stus, stus + n, cmp);
	for (int i = 0; i < n; i++) {
		ans = 0;
		for (int j = 0; j < i; j++) {
			if (stus[j].level < stus[i].level)
				ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
