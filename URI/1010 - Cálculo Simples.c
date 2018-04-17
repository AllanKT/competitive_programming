#include<stdio.h>
#include<stdlib.h>

struct dados{
	int cod, qtd;
	float valor;
};

int main(){
	struct dados d1, d2;
	scanf("%d %d %f", &d1.cod, &d1.qtd, &d1.valor);
	scanf("%d %d %f", &d2.cod, &d2.qtd, &d2.valor);
	printf("VALOR A PAGAR: R$ %.2f\n", ((d1.valor * d1.qtd) + (d2.valor * d2.qtd)));
	return 0;
}
