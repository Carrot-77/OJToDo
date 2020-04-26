/*************************************************************************
    > File Name: 504.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月15日 星期三 16时45分48秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

#define maxn 240
struct node {
	int num;
	struct node *next
};

bool cmp (int x, int y) {
	return x > y;
}

int main() {
	string n;
	int s, a[maxn + 5];
	cin >> n >> s;
	int nlen = n.length();
	for (int i = 0; i < nlen; i++) {
		a[i] = n[i] - '0';
	}
	sort (a, a + nlen, cmp);
	for (int i = 0; i < nlen; i++) {

	}
}

