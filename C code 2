#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void pont(int *a, int b){
    int i;
    int vetnew[b];
    
    for(i = 0;i < b;i++){
        vetnew[b - 1 - i] = *(a + i);
    }

    printf("\n");

    for(i = 0; i < b; i++){
        *(a + i) = vetnew[i]; 
    }
    
    system("cls");
    printf("----Vetor invertido----\n");

    for(i = 0; i < b; i++){
        printf("%d ", *a);
        a++;
    }

}

int main(){
    int a;
    
    printf("escolha o tamanho do veltor:\n");
    scanf("%d", &a);
    fflush(stdin);

    int vet[a];
    for(int i = 0;i < a;i++){
        printf("Digite o valor do vetor %d\n", 1+i);
        scanf("%d", &vet[i]);
    }
    pont(vet, a);

}
