/*************************************************************************
    > File Name: 524a.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月11日 星期六 14时20分19秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
#include<stdio.h>
using namespace std;
#define maxn 30000
int main() {

	int i, j;
	vector<vector<int>> matrix(maxn + 5);
	int m, n, x, y;
	cin >> m >> x >> y;
	n = m;
	int a = m - 1, b = n - 1;
	int c = 0, d = 0;

	int turn = 0;
	if (m > 1) {
		matrix[0][0] = 1;
		int re = 2;
		for (i = 0; i < m * n - 1; i++) {
			if (turn == 0) {
				++d;
				matrix[c][d] = re;
				re++;
				if (d == b) {
					turn = 1;
					b = b - 1;
					continue;
				}
			}
			else if (turn == 1) {
				++c;
				matrix[c][d] = re;
				re++;
				if (c == a) {
					turn = 2;
					a = a - 1;
					continue;
				}
			}
			else if (turn == 2) {
				--d;
				matrix[c][d] = re;
				re++;
				if (d == n - b - 2) {
					turn = 3;
					continue;
				}
			}
			else if (turn == 3) {
				--c;
				matrix[c][d] = re;
				re++;
				if (c == m - a - 1) {
					turn = 0;
					continue;
				}
			}

		}	
	    cout << matrix[x - 1][y - 1];
	}
	else cout << "1";
		
}
