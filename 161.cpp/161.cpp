#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main() {
	int x, n;
	cin >> x >> n;
	cout.setf(ios::fixed);
	cout << setprecision(6) << pow(1.06, n) * (float)x;
}	
