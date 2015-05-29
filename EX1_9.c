#include <stdio.h>

#define NONBLANK 'a'

main() {
	int c, lc;
	
	lc = NONBLANK;
	while((c = getchar()) != EOF) {
		if(c != ' ')
			putchar(c);
		if(c == ' ')
			if(lc != ' ')
				putchar(c);
		lc = c;
	}
}