#include <stdio.h>

enum prev_state_e{
	SPACE = 0,
	NOT_SPACE = 1
};

int main(int argv, char *argc[], char *argp[]) {
	int c;
	enum prev_state_e prev_state = NOT_SPACE;
	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			putchar(c);
			prev_state = NOT_SPACE;
		}
		else if (c == ' ' && prev_state != SPACE) {
			putchar(c);
			prev_state = SPACE;
		}
	}
	return 0;
}