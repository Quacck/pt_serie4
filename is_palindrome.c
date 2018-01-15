#include "stdlib.h"
#include "stdio.h"
#include "string.h"



int main( int argc, char * argv [] ) {
	int no_palindrome;
	int cur_str_len;
	
	for (int j=1; j<argc; j++){
		cur_str_len=strlen(argv[j]);
		no_palindrome = 0;
		
		for (int i=0; i<=cur_str_len/2; i++){
			no_palindrome = (argv[j][i]!=argv[j][cur_str_len-1-i]);
			if (no_palindrome){break;}		
		}
		
		if (no_palindrome) printf("NO\n");
		else printf("YES\n");	
	}
	return 0;
}
