#include <stdio.h>

int main() {
    
    int nc;
    int chute;
    
    nc = 3;
    
    printf("Digite um número aleatório: ");
    scanf("%d", &chute);
    printf("\n");
    
    if (nc == chute) {
        printf("Número certo! \n \n" );
    }
    else {
        printf("Número errado! \n \n");
    }
    printf("O número era: %d", nc);
    
    return 0;
}
