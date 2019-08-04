#include <stdio.h>

int main(int argv, char *argc[], char *argp[]) {
	int c;
	unsigned long blanks = 0, tabs = 0, line = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n')
			line++;
		else if (c == '\t')
			tabs++;
		else if (c == ' ')
			blanks++;
	}
	printf("blanks = %lu, tabs = %lu, line = %lu \n", blanks, tabs, line);
	return 0;
}