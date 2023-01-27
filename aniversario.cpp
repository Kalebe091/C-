#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int dia, mes, ano;
	
	printf("Informe o dia: ");
	scanf("%d", &dia);
	
	printf("Informe o mês: ");
	scanf("%d", &mes);
	
	printf("Informe o ano: ");
	scanf("%d", &ano);
	
	if(dia <= 31 && mes <= 12 && ano <= 2013){
		printf("data registrada");
	} else{
		printf("data inválida");
	}
}
