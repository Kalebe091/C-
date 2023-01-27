#include<stdio.h>
#include<locale.h>

int main(){
	
	float valor;
	int aux;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o numero \n");
	scanf("%f", &valor);
	
	aux = valor;
	if(aux == valor){
		printf("O numero inteiro digitado é %f\n", valor);
	} else{
		printf("O numero digitado não é inteiro \n");
	}
	return 0;
}
