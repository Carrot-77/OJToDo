/*************************************************************************
    > File Name: 198a.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2019年12月26日 星期四 14时31分14秒
 ************************************************************************/
#include <iostream>
using namespace std;

int main() {
    long long n, num[100005] = {0, 1, 1};
    cin >> n;
    for (int i = 3; i <= n; i++) {
        num[i] = num[i - 1] + num[i - 2];
        num[i] %= 1000000007;
    }
    cout << num[n] << endl;
    return 0;
}

