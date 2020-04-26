/*************************************************************************
    > File Name: 191.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月12日 星期四 20时51分55秒
 ************************************************************************/
#include<iostream>
#include<math.h>
using namespace std;

int prime[8000005] = {1, 1};
int main() {
	int l, r, a[1000001], j = 0;
	int mmin = 9999999;
	int mmax = 0;
	cin >> l >> r;
	int ans3 = 0, ans4 = 0;
	int ans1 = 0, ans2 = 0;
	for (int i = 2; i * i <= r; i++) {
		if (!prime[i]) {
			for (int j = 2; i * j <= r; j++)
				prime[i * j] = 1;
		}
	}
	for (int i = l; i <= r; i++) {
		if (!prime[i]) j++;
	}
	if (j < 2) {
		cout << "There are no adjacent primes.";
	}
	else {	
		for (int i = l; i <= r; i++) {
			if (!prime[i]) {
				for (int j = i + 1; j <= r; j++) {
					if (!prime[j]) {
						if(j - i < mmin) {
							ans1 = j;
							ans2 = i;
							mmin = j - i;
						}
						if (j - i > mmax){
							ans3 = j;
							ans4 = i;
							mmax = j - i;
						}
						break;
					}
				}
			}
		}	
	cout << ans2 << "," << ans1 << " are closest, ";		    cout << ans4 << "," << ans3 << " are most distant.";
	}
}
