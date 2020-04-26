/*************************************************************************
    > File Name: 304.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月01日 星期三 18时12分25秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
#include<queue>
using namespace std;

struct node {
	int x, y, step;
};
int sx, sy;

int n, m;
char mmap[200][200];
int dir[8][2] {
	1, 2, 1, -2, 2, 1, 2, -1,
	-1, 2, -1, -2, -2 , 1, -2, -1
};

int main() {
	cin >> m >> n;
	cin >> sx >> sy;
	queue<node> que;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (x != sx && y != sy) 
				que.push({i, j, 0});
		}
	}
	while (!que.empty()) {
		node temp = que.front();
		que.pop();
		for (int i = 0; i < 8; i++) {
			int x = temp.x + dir[i][0];
			int y = temp.y + dir[i][1];
			if (x < 1 || y < 1 || x > m || y > n) {
				continue;
			}
			if (x == sx && y == sy) {
				cout << temp.step + 1 << endl;
				return 0;
			} else {
				mmap[x][y] = 0;
				que.push({x, y, temp.step + 1});
			}
		}
	}
	return 0;
}
