#include <stdio.h>

int main() {

    int numero, horas;
	float valorHora;
	scanf("%d %d %f",&numero, &horas, &valorHora);
	printf("NUMBER = %d\n", numero);
	printf("SALARY = U$ %.2f\n", horas*valorHora);

    return 0;
}
