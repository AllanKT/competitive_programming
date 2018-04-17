#include<stdio.h>
#include<stdlib.h>

struct funcionario{
	char nome[30];
	double salario, montante;
};

int main(){
	struct funcionario func;
	fflush(stdin);
	gets(func.nome);
	scanf("%lf", &func.salario);
	scanf("%lf", &func.montante);
	printf("TOTAL = R$ %.2lf\n",(((func.montante / 100)*15)+func.salario));
	return 0;
}
