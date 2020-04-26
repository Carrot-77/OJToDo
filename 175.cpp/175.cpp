/*************************************************************************
    > File Name: 175.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月10日 星期二 14时13分36秒
 ************************************************************************/
#include<iostream>
using namespace std;
int main() {
	int n;
	int score[31];
	cin >> n;
	int you = 0, liang = 0, zhong = 0, cha = 0;
	for (int i = 0; i < n; i++) 
		cin >> score[i];
	for (int i = 0; i < n; i++) {
		if (score[i] >= 90) you++;
		else if(score[i] >= 80) liang++;
		else if (score[i] >= 60) zhong++;
		else cha++;
	}
	cout << "You " << you << endl;
	cout << "Liang " << liang << endl;
	cout << "Zhong " << zhong << endl;
	cout << "Cha " << cha << endl;
}
