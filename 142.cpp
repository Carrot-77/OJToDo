#include<iostream>

using namespace std;
int main(){
	int a, b;
	int k = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++){
		if (i % 2 != 0) {
			for (int j = 3; j < i; j = j + 2) {
				if (i % j == 0) break;
				else if (j >= i / 2 - 1) {
					int a1 = i / 10000;
					int a2 = i % 10000 / 1000;
					int a4 = i % 100 / 10;
					int a5 = i % 10;
					if(a1 == a5 && a2 == a4){
						k++;
						if(k > 1) cout << " ";
						cout << i;

					}
					break;
				}
			}
		}	
	}		

}
