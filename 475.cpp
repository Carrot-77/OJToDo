/*************************************************************************
    > File Name: 475.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月15日 星期三 15时52分21秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define maxn 1000
string n, m;
int a[maxn + 5], b[maxn + 5];

void f(int nlen, int mlen) {
	a[0] = nlen;
	b[0] = mlen;
	for (int i = 1; i <= nlen; i++)
		a[i] = n[alen - i];
	for (int i = 1; i <= mlen; i++)
		b[i] = m[mlen - i];
}

bool is_big() {
	if (a[0] != b[0]) return a[0] < b[0];
	for (int i = b[0]; i > 0; i--) {
		if (a[i] == b[i]) continue;
		if (a[i] > b[i]) return 0;
		else return 1;
	}
	return 1;
}

int main() {
	cin >> n >> m;
	int nlen = n.length(), mlen = m.length();
	f(nlen, mlen);
	int len = mlen - nlen + 1;
	while ()
	

}
