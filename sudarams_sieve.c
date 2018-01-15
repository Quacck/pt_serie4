#include "stdlib.h"
#include "stdio.h"

int is_prime(int a){
	
	for (int i=2; i<=a/2; i++){
		if (a%i==0){
		return 0;
		}		

	}
	return 1;
}

int main (int argc, char * argv[]){
	if (argc!=2){
		printf("Bitte nur einen Parameter eingeben!");
		return 1;
	}
	int i,j,n;

	n = (atoi(argv[1])%2==0) ? (atoi(argv[1])>>1)-1 : (atoi(argv[1])>>1);

	int huge_array[n]; //n Stelliger Array wo nur 0 drin stehen sollten
		
	for (i=0; i<=n;i++) huge_array[i]=0;


	for (j=1; j<=n; j++){
		for (i=1; i<=j;i++){
			if (i + j + 2*i*j<=n){
			huge_array[i + j + 2*i*j] = 1;
			}
		}
	}
	if (atoi(argv[1])>1) printf("2\n");
	for (i=1; i <=n; i++){
		if (huge_array[i]==0) {
			printf("%d\n",2*i+1);
		}
	}
	return 0;	
	
} 
