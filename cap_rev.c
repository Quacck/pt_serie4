#include "stdlib.h"
#include "stdio.h"

void upperstr( char s[]) {
	int i;
	for (i=0; i<=strlen(s);i++){
		if ((s[i] >= 97) & (s[i] <= 122)){
		s[i]=s[i]-32;
		}
	}
}

void reverse( char s[] ) {
	int c, i, j;
	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
		c = s[i]; s[i] = s[j]; s[j] = c;
	}
}

int main( int argc, char * argv [] ) {
	char * prog = argv[0];
	int i = 0;

	if (argc < 2 ) {
		printf("usage: %s <string>+\n", prog );
		return 1;
	}
	for (i = 1; i < argc; i++) {
		upperstr(argv[i]);
		reverse( argv[ i ] );

		printf("%s\n", argv[ i ]);
	}
	return 0;
}
