/*************************************************************************
    > File Name: 80a.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年03月25日 星期三 20时36分40秒
 ************************************************************************/

#include<iostream>
#include<queue>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

struct node {
	int x, y, step;
};

int n, m;
char mmap[505][505];
queue<node> que;
int dir[4][2] = {1, 0, 0, 1, 0, -1, -1, 0};
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> mmap[i][j];
			if (mmap[i][j] == 's') {
				que.push({i, j, 0});
			}
		}
	}
	while (!que.empty())  {
		node temp = que.front();
		que.pop();
		for (int i = 0; i < 4; i++) {
			int x = temp.x + dir[i][0];
			int y = temp.y + dir[i][1];
			if (mmap[x][y] == 'g') {
				cout << temp.step + 1 << endl;
				return 0;
			}
			if (mmap[x][y] == '.') {
				mmap[x][y] = 0;
				que.push({x, y, temp.step + 1});
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
