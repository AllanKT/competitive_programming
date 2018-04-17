#include <stdio.h>

int main() {

	int A, B, C;
	int X, Y, Z;
	int aux;

	scanf("%d %d %d", &A, &B, &C);
	X = A;
	Y = B;
	Z = C;
	if(X > Y){
		aux = X;
		X = Y;
		Y = aux;
	}
	if(X > Z){
		aux = X;
		X = Z;
		Z = aux;
	}
	if(Y > Z){
		aux = Y;
		Y = Z;
		Z = aux;
	}

	printf("%d\n%d\n%d\n", X, Y, Z);
	printf("\n%d\n%d\n%d\n", A, B, C);

    return 0;
}
