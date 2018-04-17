#include <stdio.h>

int main() {

    int x[5], cont[4]={0}, i;
    for(i=0; i<5; i++){
        scanf("%d", &x[i]);
        if(x[i] < 0)
            cont[0]++;
        if(x[i] > 0)
            cont[1]++;
        if(x[i]%2 == 0)
            cont[2]++;
        if(x[i]%2 != 0)
            cont[3]++;
    }
    printf("%d valor(es) par(es)\n", cont[2]);
    printf("%d valor(es) impar(es)\n", cont[3]);
    printf("%d valor(es) positivo(s)\n", cont[1]);
    printf("%d valor(es) negativo(s)\n", cont[0]);
    return 0;
}
