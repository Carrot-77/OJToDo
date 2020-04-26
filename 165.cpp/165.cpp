#include<iostream>
#include<math.h>
using namespace std;
int main() {
	long long int c;
	cin >> c;
	int sum = 0;
	for (long long int i = 1; i < c; i++) {
		long long int x = c * c - i * i;
		if (sqrt(x) == (int)sqrt(x)) 
			sum++;
	}
	cout << sum / 2;
}
