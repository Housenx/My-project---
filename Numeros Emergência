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
        printf("\t-----Numeros de emergencia-----\n");
        printf("-----deseja ver numeros emergenciais dos estados?----\n");
        printf("\t(sim) - (nao) ?\n");

        scanf("%s", a);
        printf("\e[1;1H\e[2J");
        if(strcmp(a, "sim") == 0)
        {
            while(atual != NULL)
            {
                printf("- POLICIA: %d - BOMBEIROS: %d - JUIZ: %d \n", atual->pol, atual->bomb, atual->law);
                atual = atual->prox;
            }
        }
    }
}
