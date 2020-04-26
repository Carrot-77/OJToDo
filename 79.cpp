/*************************************************************************
    > File Name: 79.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月20日 星期一 20时33分58秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
#include<stdio.h>
using namespace std;
#define maxn 10000000
int is_prime[maxn + 5] = {0};
int prime[maxn + 5] = {0};
void init(int b) {
	for (int i = 2; i <= b; i++) {
		if (!is_prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0] && i * prime[j] <= b; j++) {
			is_prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) break;
		}
	}
	return ;
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	init(b);
	is_prime[1] = 1;
	for (int i = a; i <= b; i++) {
		if (!is_prime[i]) printf("%d\n", i);
	}
	return 0;
}
