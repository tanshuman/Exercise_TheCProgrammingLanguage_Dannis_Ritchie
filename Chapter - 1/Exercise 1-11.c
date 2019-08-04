#include <stdio.h>

int main(int argv, char *argc[], char *argp[]) {
	int c;
	
	while ((c = getchar()) != EOF) {
		if (c < EOF)
			printf("Wrong Input - Error");
		else
			putchar(c);
	}
	return 0;
}