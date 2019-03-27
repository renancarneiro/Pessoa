#include <stdio.h>
#include <stdlib.h>

void somaValor(int n){
    n = n + 1;
}
void somaReferencia(int *n){
    *n = *n + 1;
}

int main(){

    int x;
     do{
    printf("Digite um valor: ");
    scanf("%i", &x);
    }while(x != 5);
    somaValor(x);
    printf("Valor: %d \n",x);

    int y;
    do{
    printf("Digite um valor: ");
    scanf("%i", &y);
    }while(y != 5);
    somaReferencia(&y);
    printf("Referencia: %d \n",y);

    int v[2][2];

    for (x = 0; x < 2; x++){
        for (y = 0; y < 2; y++)
    printf("%i \n",v[x][y]);

    }

    system("pause");
    return 0;
}
