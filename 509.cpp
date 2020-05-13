/*************************************************************************
    > File Name: 509.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年05月13日 星期三 20时51分38秒
 ************************************************************************/

#include <iostream>

#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int m, n;
struct Game {
	int num;
	int mon;
};
int ttime[505];
struct Game game[505];

bool temp (Game a, Game b) {
	if (a.mon == b.mon) return a.num < b.num;
	return a.mon > b.mon;
}

int func(int k) {
	for (int i = k; i >= 1; i--) {
		if (!ttime[i]) {
			ttime[i] = 1;
			return 1;
		}
	}
	return 0;
}

int main() {
	cin >> m >> n;
	int get = m;
	for (int i = 0; i < n; i++) 
		cin >> game[i].num;
	for (int i = 0; i < n; i++) 
		cin >> game[i].mon;
	sort(game, game + n, temp);
	for (int i = 0; i < n; i++) {
		if(func(game[i].num)) continue;
		get -= game[i].mon;
	}
	cout << get << endl;
	return 0;
}
