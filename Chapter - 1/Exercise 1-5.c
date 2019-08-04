#include <stdio.h>
#define FARHTOCELSIUS(FAHR) (5.0 * (FAHR - 32)/9.0)

int main(int argv, char *argc[], char *argp[]) {
	printf("%s\n", "  Fahrenheit   Celsius" );
	for (int fahr = 300; fahr >= 0; fahr -= 20)
	{
		printf("%6d  %13.2f\n", fahr, FARHTOCELSIUS(fahr) );
	}

	printf("\n");

	return 0;
}