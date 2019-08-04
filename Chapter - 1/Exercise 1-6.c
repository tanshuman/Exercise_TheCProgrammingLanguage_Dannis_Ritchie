#include <stdio.h>

int main(int argv, char *argc[], char *argp[]) {
	int verify = (getchar() != EOF);
	if ((verify == 0) || (verify == 1))
		putchar('T');
	else
		putchar('F');
	return 0;
}