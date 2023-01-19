#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
int c, nl, nw, nc, state;

state = OUT;
nl= nw = nc = 0;
while((c = getchar()) != EOF) {
	++nc;
	
	
	if(c==' '|| c == '\n' || c == '\t') { 
		state = OUT;
	if(c == '\n')
		++nl;
	}
	else if (state  == OUT) {
	state = IN;
	++nw;
	} 
}
	printf("%d %d %d\n", nl,nw,nc);
	return 1;
}
