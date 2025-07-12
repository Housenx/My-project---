#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct stado{
    int pol;
    int bomb;
    int law;
    struct stado* prox;
};

typedef struct stado stado;

void troca(stado* t){

    printf("\e[1;1H\e[2J");
    int a;
    char b[10];
    printf("Qual estado deseja modificar?\n");
    printf("Sergipe (SE) - Bahia (BA)\n");
    printf("Pernambuco (PE) - Alagoas(AL)\n");
    scanf("%s", b);

    if(strcmp(b, "BA") == 0){
        for(a = 0; a < 1; a++){
            t = t->prox;
        }
    }
    if(strcmp(b, "PE") == 0){
        for(a = 0; a < 2; a++){
            t = t->prox;
        }
    }
    if(strcmp(b, "AL") == 0){
        for(a = 0; a < 3; a++){
            t = t->prox;
        }
    }
    printf("\e[1;1H\e[2J");

    printf("Qual numero voce quer trocar?\n");
    printf("Policia(1) - Bombeiros (2) - Juiz(3)\n");
    scanf("%d", &a);

    printf("\e[1;1H\e[2J");
    switch (a)
    {
    case 1:
        printf("Digite o novo numero:\n");
        scanf("%d", &t->pol);
        break;
    case 2:
        printf("Digite o novo numero:\n");
        scanf("%d", &t->bomb);
        break;
    case 3:
        printf("Digite o novo numero:\n");
        scanf("%d", &t->law);
        break;
    }

    printf("\e[1;1H\e[2J");
}


int main(){
    char a[10];

    stado SE, BA, PE, AL;

    SE.prox = &BA;
    BA.prox = &PE;
    PE.prox = &AL;
    AL.prox = NULL;

    SE.pol = 190;
    SE.bomb = 193;
    SE.law = 181;

    BA.pol = 190;
    BA.bomb = 192;
    BA.law = 180;

    PE.pol = 190;
    PE.bomb = 191;
    PE.law = 182;

    AL.pol = 190;
    AL.bomb = 190;
    AL.law = 190;

    stado* atual = &SE;

    while(true){
        printf("\t-----------------------------------\n");
        printf("\t-------Numeros de emergencia-------\n");
        printf("\t-----------------------------------\n");
        printf("-----deseja ver numeros emergenciais dos estados?----\n");
        printf("(sim) - (nao) ?\n");

        scanf("%s", a);
        printf("\e[1;1H\e[2J");
        if(strcmp(a, "sim") == 0)
        {
            atual = &SE;
            while(atual != NULL)
            {
                printf("- POLICIA: %d - BOMBEIROS: %d - JUIZ: %d \n", atual->pol, atual->bomb, atual->law);
                atual = atual->prox;
            }
            printf("\n");
        }
        printf("Deseja Modificar algum numero emergencial dos estados?\n");
        printf("(sim) - (nao) ?\n");
        scanf("%s", a);

        if(strcmp(a, "sim") == 0)
        {
            troca(&SE);

        }else{
            printf("\e[1;1H\e[2J");
        }
    }
}
