/*************************************************************************
    > File Name: 188.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月11日 星期三 20时36分35秒
 ************************************************************************/
#include<iostream>
#include<math.h>
using namespace std;
int dj(long long int n) {
	long long int stop = sqrt(n) + 1;
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0) return 0;
	for (long long int i = 3; i <= stop; i += 2) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	long long int n, m;
	cin >> n >> m;
	for (long long int i = m; i <= n; i++) {
		if (dj(i) == 1) cout << i << endl;
	}
}
