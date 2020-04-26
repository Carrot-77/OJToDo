/*************************************************************************
    > File Name: 530.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月08日 星期三 18时10分26秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#include<queue>
#include<cstring>
int dir[4][2] {
	-1, 0, 1, 0, 0, -1, 0, 1
};

struct node {
	int x, y;
};

int n, m, cnt;
char mmap[60][60];
int check[60][60];

int main() {
	cin >> n >> m;
	queue<node> que;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> mmap[i][j];
			if (mmap[i][j] == '*') {
				que.push({i, j});
				mmap[i][j] = '.';
				check[i][j] = 1;
			}
		}
	}
	cin >> cnt;
	while (cnt--) {
		string t;
		cin >> t;
		int dir_num;
		if (t == "NORTH") dir_num = 0;
		else if (t == "SOUTH") dir_num = 1;
		else if (t == "WEST") dir_num = 2;
		else dir_num = 3;
		memset(check, 0, sizeof(check));
		int times = que.size();
		for (int i = 0; i < times; i++) {
			node temp = que.front();
			que.pop();
			for (int j = 1; 1; j++) {
				int x = temp.x + dir[dir_num][0] * j;
				int y = temp.y + dir[dir_num][1] * j;
				if (mmap[x][y] != '.') break;
				if (!check[x][y]) {
					que.push({x, y});
					check[x][y] = 1;
				}
			}
		}
	}

	while (!que.empty()) {
		node temp = que.front();
		que.pop();
		mmap[temp.x][temp.y] = '*';
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << mmap[i][j];
		}
		cout << endl;
	}
	return 0;
}
