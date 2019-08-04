#include <stdio.h>

int main(int argv, char *argc[], char *argp[]) {
	float fahr, celsius;
	int lower_limit = 0;
	int upper_limit = 100;
	int step = 10;

	celsius = lower_limit;

	printf("\n  Celsius      Farhenheit\n");

	while (celsius <= upper_limit) {
		fahr = (celsius * 9 / 5) + 32;
		printf("%8.2f %13.2f \n", celsius, fahr);
		celsius += step;
	}

	printf("\n");

	return 0;
}