#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int a, b;
	int k = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++){
		if (i % 6 == 0){
			int a1 = i / 1000;
			int a2 = i % 1000 / 100;
			int a3 = i % 100 / 10;
			int a4 = i % 10;
			for (int j = 2; j < a1 * 10 + a2; j++){
				if(i % j == 0) break;
				else if(j > (a1 * 10 + a2) / 2) {
					if (sqrt((double)(a3 * 10 + a4)) == (int)sqrt(a3 * 10 + a4)) k++;
					break;
							
				}

			}
		}
	}
	cout << k;
}
