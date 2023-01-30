#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

int main(){
	float num1, num2;
	char op;
	
	printf("\n\t\tCalculadora com 4 operacoes (modificado): \n\n");
	printf("Digite um numero / operador / numero: ");
	scanf("%f%c%f", &num1, &op, &num2);
	
	switch(op){
		case '+':
			printf("\n = %.2f\n", num1+num2);
			break;
		case '-':
			printf("\n + %.2f\n", num1-num2);
			break;
		case '*':
		case 'x':
			printf("\n = %.2f\n", num1*num2);
			break;
		case '/':
		case ':':
			printf("\n = %.2f\n", num1/num2);
			break;
		default:
			printf("\n Operacao impossivel de ser realizada!!\n");
	}
	printf("\n\n\t >>>>> CLUB DE REGATAS VASCO DA GAMA <<<<< \n\n");
	system ("PAUSE");
	
	return 0;
}
