/*************************************************************************
    > File Name: 302.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月24日 星期五 11时33分38秒
 ************************************************************************/

#include<iostream>
#include <queue>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
#include <cstring>
using namespace std;

struct node {
	int x, y, step, status;
};

int n, m, sx, sy, sx2, sy2, status;
char mmap[505][505];
int dir[3][4][2] = {
	-2, 0, 0, -2, 0, 1, 1, 0,
	-1, 0, 0, -1, 0, 2, 1, 0,
	-1, 0, 0, -1, 0, 1, 2, 0,	
};

int sta_num[3][4] = {
	2, 1, 1, 2,
	1, 0, 0, 1,
	0, 2, 2, 0,
};
int check_num[3][505][505];

int check(node &t) {
    if (check_num[t.status][t.x][t.y] == 1) {
        return 0;
    }
    if (t.status == 0) {
        if (mmap[t.x][t.y] == '.') {
            return 1;
        }
        return 0;
    }
    if (t.status == 1) {
        if ((mmap[t.x][t.y] == '.' || mmap[t.x][t.y] == 'E') &&
            (mmap[t.x][t.y + 1] == '.' || mmap[t.x][t.y + 1] == 'E')) {
            return 1;
        }
        return 0;
    }
    if ((mmap[t.x][t.y] == '.' || mmap[t.x][t.y] == 'E') &&
        (mmap[t.x + 1][t.y] == '.' || mmap[t.x + 1][t.y] == 'E')) {
        return 1;
    }
    return 0;
}

int main() {
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;
        status = 0;
        memset(check_num, 0, 3 * 505 * 505 * sizeof(int));
        memset(mmap, 0, 505 * 505 * sizeof(char));
        queue<node> que;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> mmap[i][j];
                if (mmap[i][j] == 'X' && status == 0) {
                    status++;
                    sx = i;
                    sy = j;
                } else if (mmap[i][j] == 'X' && status == 1) {
                    status++;
                    sx2 = i;
                    sy2 = j;
                }
            }
        }
        if (status == 1) {
            status = 0;
        } else if (sx == sx2) {
            status = 1;
        } else {
            status = 2;
        }
        que.push({sx, sy, 0, status});
        check_num[status][sx][sy] = 1;
        int flag = 0;
        while (!que.empty()) {
            node temp = que.front();
            que.pop();
            for (int i = 0; i < 4; i++) {
                node t2;
                t2.x = temp.x + dir[temp.status][i][0];
                t2.y = temp.y + dir[temp.status][i][1];
                t2.step = temp.step + 1;
                t2.status = sta_num[temp.status][i];
                if (t2.x < 1 || t2.y < 1 || t2.x > n || t2.y > m) {
                    continue;
                }
                if (mmap[t2.x][t2.y] == 'O' && t2.status == 0) {
                    cout << t2.step << endl;
                    flag = 1;
                    break;
                }
                if (check(t2)) {
                    check_num[t2.status][t2.x][t2.y] = 1;
                    que.push(t2);
                }
            }
            if (flag == 1) {
                break;
            }
        }
        if (flag == 0) {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
