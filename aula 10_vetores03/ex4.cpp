#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <cctype>

//Junta os dois

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	int i, k,d,temp;
	int a[10],b[10],c[20];
	
	
	for (i = 0; i < 10; i++){
		a[i] = rand()%10;
		b[i] = rand()%10;	
	}
	
	printf("A Desorgnizado:\n");
	for(i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	
	printf("\nB Desorgnizado:\n");
	for(i = 0; i < 10; i++){
		printf("%d ", b[i]);
	}

	for ( i = 0; i < 10; i++){
		for ( k = 0; k < 10; k++){
			if (a[i] < a[k]){
				temp = a[i];
				a[i] = a[k];
				a[k] = temp;
			}
		}
	}
	
	
	for ( i = 0; i < 10; i++){
		for ( k = 0; k < 10; k++){
			if (b[i] < b[k]){
				temp = b[i];
				b[i] = b[k];
				b[k] = temp;
			}
		}
	}

	for (i = 0; i < 10; i++){
		c[i] = a[i];
		c[i + 10] = b[i];
	}
	
	printf("\nC Desorgnizado:\n");
	for(i = 0; i < 20; i++){
		printf("%d ", c[i]);
	}

	for ( i = 0; i < 20; i++){
		for ( k = 0; k < 20; k++){
			if (c[i] < c[k]){
				temp = c[i];
				c[i] = c[k];
				c[k] = temp;
			}
		}
	}
	
	printf("\n\n\n\n");
	printf("A Orgnizado:\n");
	for(i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	
	printf("\nB Orgnizado:\n");
	for(i = 0; i < 10; i++){
		printf("%d ", b[i]);
	}
	printf("\nC Orgnizado:\n");
	for(i = 0; i < 20; i++){
		printf("%d ", c[i]);
	}
	
		
}