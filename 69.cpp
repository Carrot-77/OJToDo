#include<stdio.h>

int main()
{
	int year, mon, day;
	scanf("%d%d%d", &year, &mon, &day);
	if (year < 0) year += 2000;
	if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12) {
		if (day <= 31 && day > 0)
			printf("Yes");
		else
			printf("No");
	}
	else if (mon == 4 || mon == 6 || mon == 9 || mon == 11) {
		if (0 < day && day <= 30)
			printf("Yes");
		else
			printf("No");
	}
	else if (mon == 2) {
		if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0) {
			if (0 < day && day <= 29)
				printf("Yes");
			else
				printf("No");
		}
		else {
			if (0 < day && day <= 28)
				printf("Yes");
			else
				printf("No");
		}
	}
	else {
		printf("NO");
	}
}
