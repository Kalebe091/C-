#include<stdio.h>
#include<locale.h>

int main(void){
	
	float polegadas, centimetros;

	scanf("%f", &polegadas);
	centimetros = polegadas * 2.54;
	printf("O resultado da conversão é %f", centimetros);
	return(0);
	
}
	

