#include<stdio.h>

int main(void){
	int decimal, aux, cont = 0, binary[25];
	
	printf("Enter a decimal number: ");
	scanf("%d",&decimal);
	aux = decimal;
	
	while(decimal > 0){
		binary[cont] = decimal%2;
		decimal = decimal / 2;
		cont++;
	}
	
	printf("%d(10) = ",aux);
	
	for(int i = cont-1 ; i >= 0 ; i--){
		printf("%d",binary[i]);
	}
	
	printf("(2)\n\n");
	
	return 0;
}
