/*************************************************************************
    > File Name: 462.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月24日 星期五 15时20分46秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define maxn 10000
struct im {
	char a;
	string x;
	long long nu;
};

int main() {
	int n, female = 0, male = 0, num = 0;
	long long sum = 0;
	cin >> n;
	struct im ima[maxn + 5];
	for (int i = 0; i < n; i++) {
		cin >> ima[i].a;
		if (ima[i].a == 'i') {
			cin >> ima[i].x;
			if ((ima[i].x[ima[i].x.length() - 2] - '0') % 2 != 0)
				female++;
			else male++;
		} else {
			cin >> ima[i].nu;
			sum += ima[i].nu;
			num++;
		}
	}
	cout << female << " " << male << " ";
	if (num != 0) cout << sum / num;
	else cout << num;
	return 0;

}
