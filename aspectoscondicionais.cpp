#include <stdio.h>

int main() {
	int idade, pontos;
	
	printf("Digite a sua idade: ");
	scanf("%i", &idade);
	
	printf("Digite a sua nota: ");
	scanf("%f", &pontos);
	
	if(idade >=18 || pontos >=80){
		
		printf("Classificado!...");
		
	}
	
	else{
		
		printf("desclassificado!...");
		
	}
	return(0);

}
