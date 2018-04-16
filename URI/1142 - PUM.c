#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, i, M;
    scanf("%d", &N);
    M=4*N;
    for (i=1; i<=M; i++) (i%4==0)? printf("PUM\n"):printf("%d ", i);
    return 0;
}
