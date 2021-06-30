//Bibliotecas 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Início Algoritmo
int main(){
	setlocale(LC_ALL,"Portuguese");
	// Variáveis
	float salariob, reajuste, salariof,salarioR;
	int i,resp;
	//Cabeçalho 
	do{
		printf ("\n*********************************************************\n");
		printf ("\n");
		printf("\nEMPRESA: ARUARA MADEIREIRA");
		printf ("\nPROPRIETÁRIO: Alysson Wilyan Leite da Silva");
		printf ("\n*********************************************************\n");;
		//Entrada de dados
		printf("\nDIGITE O VALOR DO SALÁRIO BRUTO:  R$ ");
		scanf ("%f", &salariob);
		fflush(stdin);
		printf ("\n");
		//Processamento/Saída de dados
		reajuste = (1+(7.5/100));
		salariof = (salariob * reajuste);
		salarioR = salariof + 150;
		//saída de dados
		if(salariof <= 1750){ 
			printf ("\n*********************************************************\n");
			printf ("\n");
			printf ("SALÁRIO BRUTO : R$ %.2f \n", salariob);
			printf ("ABONO SALARIAL DE : R$ 150.00 \n");
			printf ("SALÁRIO APÓS O REAJUSTE: R$ %.2f \n", salarioR);
			printf ("O VALOR BRUTO DO SALÁRIO FOI ACRESCIDO DE  : R$ %.2f \n",  salarioR - salariob );
			printf ("\n***********************************************************");	
			printf("\n\n");
			printf("Deseja realizar uma nova verificação ? 1- S\\ 2- N\n\n");
			scanf("%d",&resp);
			fflush(stdin);
		}
		else {
			printf ("\n***********************************************************\n");
			printf ("\n");
			printf ("SALARIO BRUTO : R$ %.2f \n", salariob);
			printf ("SALARIO APOS O REAJUSTE: R$ %.2f \n", salariof);
			printf ("O VALOR BRUTO DO SALARIO FOI ACRESCIDO DE  : R$ %.2f \n",  salariof - salariob);
			printf ("\n***********************************************************\n");	
			printf("\n\n");
			printf("Deseja realizar uma nova verificação ? 1 -S\\ 2- N\n\n");
			scanf("%d",&resp);
			fflush(stdin);
		}
		system("cls");
	}while(resp != 2);
	
	return  (0); 
}
