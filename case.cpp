#include <stdio.h>
#include <conio2.h>

int main(){
	int valor;
	
	printf("Digite um valor de 1 a 3: ");
	scanf("%d", &valor);
	
	switch(valor){
		case 1:
			printf("Domingo\n");
			break;
		
		case 2:
			printf("Segunda\n");
			break;
		
		case 3:
			printf("Segunda\n");
		break;
		
		default:
			printf("Valor invalido!\n");
	}
	getch();
	return 0;
}
