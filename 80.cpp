/*************************************************************************
    > File Name: 80.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年03月11日 星期三 20时31分07秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int n, m, sx, sy;
char mmap[505][505];
int ans;
int dir[4][2] = {
	1, 0, 0, 1, -1, 0, 0, -1
};

int f(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int tx = x + dir[i][0];
		int ty = y + dir[i][1];
		if (mmap[tx][ty] == 'g') return 1;
		if (mmap[tx][ty] == '.') {
			mmap[tx][ty] = '*';
			if (f(tx, ty)) return 1;
		}
	}
	return 0;
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> mmap[i][j];
			if (mmap[i][j] == 's') {
				sx = i;
				sy = j;
			}
		}
	}
	if (f(sx, sy)) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
