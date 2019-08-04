#include <stdio.h>

int main(int argv, char *argc[], char *argp[]) {
	int c;
	
	while ((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else
			putchar(c);
	}
	return 0;
}