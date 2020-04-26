/*************************************************************************
    > File Name: 561.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年04月26日 星期日 15时48分13秒
 ************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
#define INF 0x3f3f3f3f

int dp[10010],w[505],v[505];
int main()
{
    int e,f,i,j,n;
    
    memset(dp,INF,sizeof(dp));
    dp[0] = 0;
    cin >> e >> f >> n;
	for(i = 0;i < n; i++)
		cin >> v[i] >> w[i];
	int m = f-e;
    for(i = 0;i < n; i++)
		for(j = w[i];j <= m; j++)
            dp[j]=min(dp[j],dp[j-w[i]]+v[i]);
    if(dp[m]!=INF)
        cout << "The minimum amount of money in the piggy-bank is " << dp[m] << "." << endl;
	else cout << "This is impossible." << endl;
    return 0;
 } 


