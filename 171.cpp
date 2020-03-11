/*************************************************************************
    > File Name: 171.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月16日 星期四 23时43分25秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define maxn 1000

bool is_real (string a, int n) {
	int i = n; 
	while (n / 2 <= i) {
		if (a[n - i] != a[i - 1]) 
			return false;
		i--;
	}
	return true;
}

int com(int *a, int *b) {
	for (int i = b[0]; i > 0; i--) {
		if (a[i] == b[i]) continue;
		else if (a[i] > b[i]) return 1;
		else return 2;
	}
	return 0;
}

int sub(int *a, int *b, int *c, int k) {
	int ans1[maxn + 5], ans2[maxn + 5];
	int x = com(a, b);
	if (k == 1) {
		if (x == 2) {
			for (int i = b[0]; i > 0; i--) {
				ans1[i] = b[i] - a[i];
				ans2[i] = c[i] - b[i];
			}
		}else {
			for (int i = b[0]; i > 0; i--) {
				ans1[i] = a[i] - b[i];
				ans2[i] = c[i] - b[i];
			}
		}
	} else {
		if (x == 2) {
			for (int i = b[0]; i > 0; i--) {
				ans1[i] = b[i] - a[i];
				ans2[i] = b[i] - c[i];
			}
		}else {
			for (int i = b[0]; i > 0; i--) {
				ans1[i] = a[i] - b[i];
				ans2[i] = b[i] - c[i];
			}
		}
	}
	ans1[0] = b[0];
	ans2[0] = b[0];
	for (int i = 1; i <= ans1[0]; i++) {
		ans1[0] -= (0 == ans1[ans1[0]]);
		if (ans1[i] >= 0) continue;
		ans1[i + 1] -= 1;
		ans1[i] += 10;
	}
	for (int i = 1; i <= ans2[0]; i++) {
		ans2[0] -= (0 == ans2[ans2[0]]);
		if (ans2[i] >= 0) continue;
		ans2[i + 1] -= 1;
		ans2[i] += 10;
	}
	/*
	cout << "num1 - num :ans1 = " << endl;
	for (int i = ans1[0]; i > 0; i--)
		cout << ans1[i];
	cout << endl;
	cout << "num2 - num :ans2 = " << endl;
	for (int i = ans2[0]; i > 0; i--)
		cout << ans2[i];
	cout << endl;
	*/
	if (ans1[0] > ans2[0]) return 2;
	else if (ans1[0] < ans2[0]) return 1;
	else {
		for (int i = ans1[0]; i > 0; i--) {
			if (ans1[i] > ans2[i]) return 2;
			else if (ans2[i] > ans1[i]) return 1;
			else continue;
		}
	}
	return 3;

}
int main() {
	string a;
	cin >> a;
	int len = a.length();
	if (is_real(a, len)) {
		cout << a;
		return 0;
	}
	if (a[0] == '1') {
		for (int i = 1; i < len; i++) {
			if (a[i] != '0') break;
			else if (i == len - 1) {
				for (int j = 0; j < len - 1; j++)
					cout << "9";
				return 0;
			}
		}
	}
	int num1[maxn + 5], num2[maxn + 5], num[maxn + 5];
	num[0] = len;
	for (int i = 1; i <= len; i++) {
		num1[i] = a[len - i] - '0';
		num2[i] = a[len - i] - '0';
		num[i] = a[len - i] - '0';
	}		
	int k = 0;
	
	if (len & 1) {
		//cout << "1" << endl;
		if (num[(len + 1) / 2 + 1] < 5) {
			k = 1;
			num2[(len + 1) / 2] += 1;
		} else num2[(len + 1) / 2] -= 1;
	} else {
		//cout << "0" << endl;
		if (num[len / 2 + 1] < 5)  {
			k = 1;
			num2[len / 2 + 1] += 1;
		} else num2[len / 2 + 1] -= 1; 

	}
	for (int i = 1; i <= len / 2; i++) {
		num1[i] = num1[len - i + 1];
		num2[i] = num2[len - i + 1];
	}
	/*
	cout << "num1 = " << endl;
	for (int i = len; i > 0; i--)
		cout << num1[i];
	cout << endl;
	cout << "num2 = " << endl;
	for (int i = len; i > 0; i--)
		cout << num2[i];
	cout << endl;
	*/
	if (sub(num1, num, num2, k) == 2) {
		for (int i = 1; i <= len; i++) 
			cout << num2[i];
	} else {
		for (int i = 1; i <= len; i++)
			cout << num1[i];
	}
	return 0;
}
