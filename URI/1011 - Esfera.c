#include<stdio.h>
#include<stdlib.h>
#define P 3.14159
int main(){
	double R;
	scanf("%lf", &R);
	printf("VOLUME = %.3lf\n", ((4/3.0) * P * (R*R*R)));
	return 0;
}
