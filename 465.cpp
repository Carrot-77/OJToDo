/*************************************************************************
    > File Name: 465.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年02月06日 星期四 21时25分34秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
	int k;
	string s;
	cin >> s >> k;
	int len = s.length();
	if (k > len) cout << "0" << endl;
	else cout << s[len - k] << endl;
	return 0;
}
