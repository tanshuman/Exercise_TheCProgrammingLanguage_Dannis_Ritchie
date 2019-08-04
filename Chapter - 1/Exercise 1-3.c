#include <stdio.h>

int main(int argv, char *argc[], char *argp[]) {
	float fahr, celsius;
	int lower_limit = 0;
	int upper_limit = 100;
	int step = 10;

	fahr = lower_limit;

	printf("Fahrenheit Celsius\n");

	while (fahr <= upper_limit) {
		celsius = 5 * (fahr - 32)/9;
		printf("%6.2f %10.2f \n", fahr, celsius);
		fahr += step;
	}

	return 0;
}