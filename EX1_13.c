#include <stdio.h>

#define IN 1
#define OUT 0

main() {
	int c, i, state, nw;
	
	int wordlen[15];
	
	for(i = 1; i <= 15; ++i) 
		wordlen[i] = i;
		
	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\n' || c == '\t') {
			if(state == IN) {
				printf('\n');
				state = OUT;
			}
		} else if(state == OUT) {
			
	}
	
}
