/*************************************************************************
    > File Name: 303.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月01日 星期三 18时33分45秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#include <queue>

struct node{
	int x, y, step;
};

int m, n;
int sx, sy;
char mmap[1005][1005];
int ans[1005][1005];
int dir[8][2] {
	1, 2, 1, -2, 2, 1, 2, -1,
	-1, 2, -1, -2, -2 , 1, -2, -1
};

int main() {
	cin >> n >> m;
	cin >> sx >> sy;
	queue<node> que;
	que.push({sx, sy, 0});
	ans[sy][sy] = -2;
	while (!que.empty()) {
		node temp = que.front();
		que.pop();
		for (int i = 0; i < 8; i++) {
			int x = temp.x + dir[i][0];
			int y = temp.y + dir[i][1];
			if (x < 1 || y < 1 || x > n || y > m || ans[x][y]) continue;
			ans[x][y] = temp.step + 1;
			que.push({x, y, ans[x][y]});
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (j != 1) cout << " ";
			if (ans[i][j] == -2) cout << "0";
			else if (ans[i][j] == 0) cout << "-1";
			else cout << ans[i][j];
		}
		cout << endl;
	}
	return 0;

}
