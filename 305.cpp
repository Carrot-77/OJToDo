/*************************************************************************
    > File Name: 305.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月01日 星期三 19时12分00秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#include<queue>
struct node {
	int x, y, step;
};
char mmap[105][105];
int m, n, x, y;
int dir[8][2] = {
	0, 1, 1, 0, -1, 0, 0, -1,
	1, 1, 1, -1, -1, 1, -1, -1
};

int main() {
	cin >> m >> n >> y >> x;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			cin >> mmap[i][j];
	}
	queue<node> que;
	que.push({(n - x + 1), y, 0});
	mmap[(n - x + 1)][y] = 0;
	int ans = 0;
	while (!que.empty()) {
		node temp = que.front();
		que.pop();
		ans = temp.step;
		for (int i = 0; i < 8; i++) {
			int tx = temp.x + dir[i][0];
			int ty = temp.y + dir[i][1];
			if (mmap[tx][ty] == '.') {
				mmap[tx][ty] = 0;
				que.push({tx, ty, temp.step + 1});
			}
		}
	}
	cout << ans << endl;

}

