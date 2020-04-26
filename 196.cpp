/*************************************************************************
    > File Name: 196.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月26日 星期四 10时40分09秒
 ************************************************************************/

#include <stdio.h>
int a[100001];
void sept(int n) {
	a[2] = 1; 
	a[3] = 1;
	a[4] = 1;
	for (int i = 5; i <= n; i++) {
		a[i] = a[i - 2] + a[i - 3];
	}
	printf("%d", a[n]);

}
int main() {
	int i;
	int N;
	scanf("%d", &N);
	sept(N);
	return 0;
}
