#include <stdio.h>

enum prev_state_e{ IN, OUT };

int main(int argv, char *argc[], char *argp[]) {
	int c;
	enum prev_state_e prev_state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if(prev_state == IN)  {
				putchar('\n');
				prev_state = OUT;
			}
			else
				continue;
		}
		else {
			putchar(c);
			prev_state = IN;
		}
	}
	return 0;
}