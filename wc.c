#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main(){
	int c;
	int word=0,line=0,character=0;
	int zustand=0;
	while ((c=getchar())!=EOF){
		switch (c) 
		{

			case 32 : /*@fallthrough@*/

			case 9 : {
				/*TAB*/
				character++;
				if (zustand==1) {
					word++;
					zustand=0;
				}		
				break;
			}

			case 10 : {
				/*ENTER*/
				line++;
				character++;
				if (zustand==1) {
					word++;
					zustand=0;
				}
				break;
			}
			default : {
				/*ANDERE ZEICHEN*/
				character++;
				zustand=1;
			}

		}	


	}
	if (zustand==1) word++;	

	printf("%d %d %d",line,word,character);
	
	return 0;
}
