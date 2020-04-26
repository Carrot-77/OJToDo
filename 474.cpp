/*************************************************************************
    > File Name: 474.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月15日 星期三 11时10分27秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define maxn 100

int main() {
	int n;
	string ans, my[maxn + 5];
	cin >> n >> ans;
	double prob = 1.0;
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < 4; i++) {
			cin >> my[i]; 
		}
		if (ans[j] == 'A')  {
			int alen = my[0].length();
			if (alen == 2)
				prob *= (double)(my[0][0] - '0') * 0.01;
			else if (alen == 3)
				prob *= (double)(my[0][0] - '0') * 0.1 + (double)(my[0][1] - '0') * 0.01;
			else prob *= 1;
			//cout << j << ": " << prob << endl;
		} else if (ans[j] == 'B')  {
			int blen = my[1].length();
			if (blen == 2)
				prob *= (double)(my[1][0] - '0') * 0.01;
			else if (blen == 3)
				prob *= (double)(my[1][0] - '0') * 0.1 + (double)(my[1][1] - '0') * 0.01;
			else prob *= 1;
			//cout << j << ": " << prob << endl;
		} else if (ans[j] == 'C')  {
			int clen = my[2].length();
			if (clen == 2)
				prob *= (double)(my[2][0] - '0') * 0.01;
			else if (clen == 3)
				prob *= (double)(my[2][0] - '0') * 0.1 + (double)(my[2][1] - '0') * 0.01;
			else prob *= 1;
			//cout << j << ": " << prob << endl;
		} else if (ans[j] == 'D')  {
			int dlen = my[3].length();
			if (dlen == 2)
				prob *= (double)(my[3][0] - '0') * 0.01;
			else if (dlen == 3)
				prob *= (double)(my[3][0] - '0') * 0.1 + (double)(my[3][1] - '0') * 0.01;
			else prob *= 1;
			//cout << j << ": " << prob << endl;
		}
	}
	cout << prob;
}
